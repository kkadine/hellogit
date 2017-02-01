#include "Love.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(string pre,Love b,string stuff)
{
  cout<<pre<<"("<<b.GetDigi()<<","<<b.GetVal()<<", "<<stuff<<")";
}

int main()
{
vector<Love>b;
Love b1{10,"bim"};
Love b2{5,"Jam"};
Love b3{3,"fan"};
Love b4{23,"bike"};

print("b1=",b1,"\n");
print("b2=",b2,"\n");
print("b3=",b3,"\n");
print("b4=",b4,"\n");

//cout<< output<<endl<<endl;
b.push_back(b1);
b.push_back(b2);
b.push_back(b3);
b.push_back(b4);

return 0;
}
