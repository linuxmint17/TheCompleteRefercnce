#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
//The reinterpret_cast oerator converts one type into a fundamentally different
//type .
//for example ,It can change a pointer into an integer and an integer into a
//into a pointer .It can also be used for castinginhereently incompatible
//pointer types.
int main(void)
{
  long int  i;
  char *p=(char *)"Thiss is a string";
  i=reinterpret_cast<long int> (p);
  cout<<i;
  cout<<endl;
  return 1;
}
