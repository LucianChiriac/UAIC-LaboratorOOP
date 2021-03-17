#pragma once
#include <iostream>
#include <cstring>


class Number
{
// add data members
private:
   char *value;
   int base;
   
   char* buildStringDecimal();
   char reVal(int  n);
   int switchDecimal();
   void switchFromDecimal(int base);
   int getVal(char c);
public:
   int decimal;

   Number(const char * value, int base); // where base is between 2 and 16
   ~Number();

   // add operators and copy/move constructor
   char operator[](int poz);
   bool operator>(const Number& B);
   bool operator>=(const Number& B);
   bool operator<(const Number& B);
   bool operator<=(const Number& B);
   bool operator==(const Number& B);
   bool operator!=(const Number& B);



   void SwitchBase(int newBase);
   void Print();
   int  GetDigitsCount(); // returns the number of digits for the current number
   int  GetBase(); // returns the current base

};