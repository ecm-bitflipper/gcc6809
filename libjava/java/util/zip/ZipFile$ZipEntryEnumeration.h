
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_ZipFile$ZipEntryEnumeration__
#define __java_util_zip_ZipFile$ZipEntryEnumeration__

#pragma interface

#include <java/lang/Object.h>

class java::util::zip::ZipFile$ZipEntryEnumeration : public ::java::lang::Object
{

public:
  ZipFile$ZipEntryEnumeration(::java::util::Iterator *);
  virtual jboolean hasMoreElements();
  virtual ::java::util::zip::ZipEntry * target$nextElement();
  virtual ::java::lang::Object * nextElement();
private:
  ::java::util::Iterator * __attribute__((aligned(__alignof__( ::java::lang::Object)))) elements;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_zip_ZipFile$ZipEntryEnumeration__