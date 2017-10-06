#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//some times  overloading funciton may cause ambiguity
//because of the auto type conversion
// all floating-point constants in C++ are automatically of type double.
float myfunc(float i)
{return i;}
double myfunc(double i){return -i;}
int main(void)
{
  cout<<myfunc(10.23)<<endl;//unambiguous ,calls myfunc(double)
  //  cout<<myfunc(23)<<endl;//ambiguous,can not be compiled
  return 0;
}
