//class definition

#ifndef LOVE_H
#define LOVE_H
#include <iostream>
#include <string>
using namespace std;

class Love
{
  private:
     int digi = 0;
     string val =" ";

  public:

    Love(); //default constructor
  Love(int n,string b);
    int GetDigi();
    void SetDigi(int n);
    string GetVal();
    void SetVal(string b);

};
    









#endif
