
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_HTML_401Swing__
#define __gnu_javax_swing_text_html_parser_HTML_401Swing__

#pragma interface

#include <gnu/javax/swing/text/html/parser/HTML_401F.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
            namespace parser
            {
                class HTML_401Swing;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          namespace parser
          {
              class DTD;
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::HTML_401Swing : public ::gnu::javax::swing::text::html::parser::HTML_401F
{

public:
  HTML_401Swing();
  static ::javax::swing::text::html::parser::DTD * getInstance();
public: // actually protected
  virtual JArray< ::java::lang::String * > * getBodyElements();
public: // actually package-private
  static ::gnu::javax::swing::text::html::parser::HTML_401Swing * singleton;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_swing_text_html_parser_HTML_401Swing__