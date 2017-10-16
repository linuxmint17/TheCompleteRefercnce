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
//this is a function template
//template <class X> void swapargs(X &a,X &b)
//at here class can be replaced by typename
template <typename X> void swapargs(X &a,X &b)
{
  X temp;
  temp=a;
  a=b;
  b=temp;
}
int main(void)
{
  int i=10,j=20;
  double x=10.1,y=23.3;
  char a='x',b='z';
  cout<<"Original i,j:"<<i<<" "<<j<<endl;
  cout<<"Original x,y:"<<x<<" "<<y<<endl;
  cout<<"Original i,j:"<<a<<" "<<b<<endl;

  swapargs(i,j);//swap integers
  swapargs(x,y);//swap floats
  swapargs(a,b);//swap chars
  cout<<"Swapped i,j:"<<i<<" "<<j<<endl;
  cout<<"Swapped x,y:"<<x<<" "<<y<<endl;
  cout<<"Swapped i,j:"<<a<<" "<<b<<endl;

  
  return 0;
}
