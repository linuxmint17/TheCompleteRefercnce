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
  int i,j;
public:
  void set(int a,int b){i=a;j=b;}
  void show(){cout<<i<<" "<<j<<endl;}
};
//public elements of base are privatte in drived
class derived : private base {
    int k;
 public:
  derived(int x){k=x;}
    void showk(){cout<<k<<endl;}
  };

int main(void)
{
  derived ob(3);
  //  ob.set(1,2);//error ,can not access set()
  //  ob.show();//error ,can not show()
  ob.showk();

  return 0;
}
//When a base class' access specifier is private, public and protected members of the base
//become private members of the derived class. This means that they are still accessible by
//members of the derived class but cannot be accessed by parts of your program that are
//not members of either the base or derived class.
