#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class cl{
  int id;
public:
  int i;
  cl(int i);
  ~cl();
  void neg(cl &o){o.i=-o.i;}//no temporary created
};
cl::cl(int num)
{
  cout<<"Constructing "<<num<<endl;
  id=num;
}
cl::~cl()
{
  cout<<"destrcting"<<id<<endl;
}
int main(void)
{
  cl o(1);
  o.i=10;
  o.neg(o);
  cout<<o.i<<endl;
  
  return 0;
}
