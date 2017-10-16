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

template <typename type1,class type2>
void myfunc(type1 x,type2 y)
{
  cout<<x<<" " <<y<<endl;
}
int main(void)
{
  myfunc(10,"I love c++");
  myfunc(98.6,19L);
  return 0;
}
