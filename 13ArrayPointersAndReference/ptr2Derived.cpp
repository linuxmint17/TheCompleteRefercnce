#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class base{
  int i;
public:
  void set_i(int num){i=num;}
  int get_i(){return i;}
};
class derived : public base{
  int j;
public:
  void set_j(int num){j=num;}
  int get_j(){return j;}
};
int main(void)
{
  base *bp;
  derived d[2];
  d[0].set_i(1);
  d[1].set_i(2);

  cout<<bp->get_i()<<endl;
  bp++;//relative to base ,not derived
  cout<<bp->get_i();//garbage value displayed
  
  return 0;
}
// the use of abse pointers to derived types is most useful
//when creating run-time polymorphism throough the mechanism
//of virtual functions
