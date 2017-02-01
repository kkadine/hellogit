#include "Love.h"

Love::Love()
{
    digi = 0;
     val= " ";
}
Love::Love(int n,string b)
{
    digi = n;
     val= b;
}
int Love::GetDigi()
{
   return digi;
}

void Love::SetDigi(int n)
{
 digi = n;
}

string Love::GetVal()
{
   return val;
}

void Love::SetVal(string b)
{
 val = b;
}
