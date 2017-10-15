#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
void swap(int &i,int &j)
{
  int t=i;
  i=j;
  j=t;
}
int main(void)
{
 int  a,b,c,d;
  a=1;b=2;c=3;d=4;
  cout<<"a and b:"<<a<<" " <<b<<endl;
  swap(a,b);//no &operator needed
  cout<<"a and b:"<<a <<" " <<b<<endl;

  cout<<"c and d :"<<c<<" " <<d<<endl;
  swap(c,d);//no &operator needed
  cout<<"c and d:"<<c <<" " <<d<<endl;
  
  return 0;
}
