#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
  class cl{
    int i;
  public:
    cl(){i=0;}
    cl(int j){i=j;}
    int get_i(){return i;}
    return 0;
  };
  cl ob[3]={1,2,3};
  cl *p;
  int i;
  p=ob;//get start of array
  for(i=0;i<3;i++)
    {
    cout<<p->get_i()<<endl;
  p++;//point to next object
   
  return o;
}
