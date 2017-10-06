#include<iostream>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
int myfunc(int i);
int myfunc(int i, int j);
double myfunc(double i);
int main(void)
{
  cout<<myfunc(10)<<" ";//calls myfunc(int i)
  cout<<myfunc(55.4)<<endl;//calls myfunc(double i)
  cout<<myfunc(4,5)<<endl;//calls myfunc(int i,int j)
  return 0;
}
double myfunc(double i)
{
  return i;
}
int myfunc(int i)
{
  return i;
}
int myfunc(int i,int j)
{
  return i*j;
}
