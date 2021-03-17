#pragma once
#include <iostream>
#include <cstring>


class Number
{
// add data members
private:
   char *value;
   int base;
   void switchDecimal();
   void switchFromDecimat(int base);
   int getVal(char c);
public:

   Number(const char * value, int base); // where base is between 2 and 16
   ~Number();

   // add operators and copy/move constructor



   void SwitchBase(int newBase);
   void Print();
   int  GetDigitsCount(); // returns the number of digits for the current number
   int  GetBase(); // returns the current base
};