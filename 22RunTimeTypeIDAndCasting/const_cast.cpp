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
//demonstrate const_cast
//const_cast is used to explicitly override const and /or volatile in a cast.
//The target type must be the same as the source type expect for the
//alteration of its const generate form of its const or volatile attributes.
//the most common use of const_cast is to remove const-ness.
void sqrval(const int *val)
{
  int *p;
  //cast away const-ness.
  p=const_cast<int *> (val);
  *p=*val* *val;//now modify object through val
}
int main(void)
{
  int x=10;
  cout<<"x before call: \n"<<x<<endl;
  sqrval(&x);
  cout<<"x after call:\n"<<x<<endl;
  
  return 1;
}
