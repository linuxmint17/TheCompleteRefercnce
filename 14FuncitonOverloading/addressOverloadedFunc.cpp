#include<iostream>
#include<cstdio>





#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;

int myfunc(int a);
int myfunc(int a,int b);

int main(void)
{
  int (*fp)(int a);//pointer to int f(int)
  int (*fq)(int a,int b);
  fp=myfunc;//pointers to myfunc(int)

  cout<<fp(5)<<endl;
  cout<<fq(4,5)<<endl; 
  
  return 0;
}
int myfunc(int a)
{
  return a;
}
int myfunc(int a,int b)
{
  return a*b;
}
