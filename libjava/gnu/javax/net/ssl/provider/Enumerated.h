
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_Enumerated__
#define __gnu_javax_net_ssl_provider_Enumerated__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class Enumerated;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::Enumerated : public ::java::lang::Object
{

public:
  virtual JArray< jbyte > * getEncoded() = 0;
  virtual jint getValue() = 0;
  virtual ::java::lang::String * toString() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __gnu_javax_net_ssl_provider_Enumerated__