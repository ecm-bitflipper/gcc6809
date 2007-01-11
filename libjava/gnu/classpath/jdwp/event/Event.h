
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_Event__
#define __gnu_classpath_jdwp_event_Event__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace event
        {
            class Event;
            class EventRequest;
        }
        namespace transport
        {
            class JdwpPacket;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::Event : public ::java::lang::Object
{

public:
  Event(jbyte);
  virtual jbyte getEventKind();
public: // actually protected
  virtual void _writeData(::java::io::DataOutputStream *) = 0;
public:
  virtual ::java::lang::Object * getParameter(jint) = 0;
  virtual ::gnu::classpath::jdwp::transport::JdwpPacket * toPacket(::java::io::DataOutputStream *, ::gnu::classpath::jdwp::event::EventRequest *);
  static const jint EVENT_CLASS = 1;
  static const jint EVENT_THREAD = 2;
  static const jint EVENT_LOCATION = 3;
  static const jint EVENT_INSTANCE = 4;
  static const jint EVENT_FIELD = 5;
  static const jint EVENT_EXCEPTION_CLASS = 6;
  static const jint EVENT_EXCEPTION_CAUGHT = 7;
private:
  jbyte __attribute__((aligned(__alignof__( ::java::lang::Object)))) _eventKind;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_event_Event__