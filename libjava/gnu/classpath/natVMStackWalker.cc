// natVMStackWalker.cc

/* Copyright (C) 2006  Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

#include <config.h>
#include <platform.h>

#include <gcj/cni.h>
#include <jvm.h>
#include <java-stack.h>
#include <gnu/classpath/VMStackWalker.h>
#include <gnu/gcj/RawData.h>
#include <java/lang/ClassLoader.h>

JArray<jclass> *
gnu::classpath::VMStackWalker::getClassContext(void)
{
  return _Jv_StackTrace::GetStackWalkerStack ();
}

jclass
gnu::classpath::VMStackWalker::getCallingClass(void)
{
  return _Jv_StackTrace::GetStackWalkerCallingClass ();
}

jclass
gnu::classpath::VMStackWalker::getCallingClass(::gnu::gcj::RawData *pc)
{
  void *f = _Unwind_FindEnclosingFunction (pc);

  // FIXME: it might well be a good idea to cache pc values here in
  // order to avoid repeated invocations of
  // _Unwind_FindEnclosingFunction, which is quite expensive.  On the
  // other hand, which not simply write a caching version of
  // _Unwind_FindEnclosingFunction itself?  That would probably be
  // worthwhile.

  _Jv_StackTrace::UpdateNCodeMap ();
  jclass klass = (jclass) _Jv_StackTrace::ncodeMap->get ((jobject) f);

  // If the caller is a compiled frame and the caller of the caller
  // is an interpreted frame then klass will be null and we need to
  // unwind the stack.
  if (klass == NULL)
    klass = _Jv_StackTrace::GetStackWalkerCallingClass ();

  return klass;
}

::java::lang::ClassLoader *
gnu::classpath::VMStackWalker::getClassLoader(::java::lang::Class *c)
{
  return c->getClassLoaderInternal ();
}

::java::lang::ClassLoader *
gnu::classpath::VMStackWalker::getCallingClassLoader(void)
{
  return
    _Jv_StackTrace::GetStackWalkerCallingClass ()->getClassLoaderInternal ();
}

::java::lang::ClassLoader *
gnu::classpath::VMStackWalker::getCallingClassLoader(::gnu::gcj::RawData *pc)
{
  return getCallingClass (pc)->getClassLoaderInternal ();
}

::java::lang::ClassLoader *
gnu::classpath::VMStackWalker::firstNonNullClassLoader(void)
{
  return _Jv_StackTrace::GetStackWalkerFirstNonNullLoader ();
}