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
//overload a function template declartion
//version 1 of f() template
template <class X>void f(X a){cout<<a<<' ' <<"Inside f(X a)\n";}
//version 2 of f() template
template <typename X,class Y> void f(X a,Y b)
{
  cout<<a<<' '<<b<<"Inside f(X a,Y b)\n";
}
int main(void)
{
  f(10);//calls f(x)
  f(10,20); //calls f(X,Y)

  f(23.23);//calls f(x)
  f(2.2,2.4);//calls f(X,Y)
  
  return 0;
}
