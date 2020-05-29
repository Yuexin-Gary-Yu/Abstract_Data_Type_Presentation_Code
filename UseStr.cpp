/////////////////////////////////////////////////////////////////////
//  UseStr.cpp - simple demonstration of Str module                //
/////////////////////////////////////////////////////////////////////
//
//  useStr.cpp - how do I use a "user defined type"?
//
//  step #1 - include header file for user defined type, str.h
//  step #2 - make implementation file, str.cpp and header file, str.h
//            part of your project
//  step #3 - use the member functions of the user defined
//            class to help with the processing in your
//            "executive" file, useStr.cpp.
//
// Note: This application uses just a few of the STR class features.
//       Its purpose is to show how an ADT is used, not to provide
//       exhaustive testing.
//
#include <iostream>
#include "str.h"

using namespace std;

void main() {

  cout << "\n  Testing User Defined Str Class "
       << "\n ================================\n\n";

  Str s = Str("this is a string");        // using promotion ctor
  cout << "  " << s << endl;              // using operator<<(...)
  s += Str(" with an appended string");   // using operator+=(...)
  cout << "  " << s << endl;              // using operator<<(...)

  cout << "  the third character is: " << s[2] << endl;
                                          // using operator[](...)
  cout << "  Adding two strings: ";
  Str s1 = Str("first string, "), s2 = Str("second string");
  cout << "  " << (s = s1 + s2) << "\n\n";  // using operator+(...)
}