#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
//when the access specifier for a base class is public, all public members of the base
//  become public members of the derived class, and all protected members of the base
//become protected members of the derived class. In all cases, the base's private elements
//remain private to the base and are not accessible by members of the derived class.
using namespace std;
class base{
  int i,j;
public:
  void set(int a,int b){i=a;j=b;}
  void show(){cout<<i<<" "<<j<<endl;}
};
class derived:public base{
  int k;
public:
  derived(int x){k=x;}
  void showk(){cout<<k<<endl;}
};
int main(void)
{
  derived ob(3);

  ob.set(1,2);//access member of base
  ob.show();//access memberr of base

  ob.showk();//uses member of derived class
    
  return 0;
}
