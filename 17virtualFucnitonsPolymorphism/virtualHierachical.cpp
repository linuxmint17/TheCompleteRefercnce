#include<iostream>
using namespace std;
//Inheritance is hierarchical in C++,it makes sense that virtual functions
//are also hierarchical. This means that when a derived class fails to override
//a virtual function the first redefintion found in reverse order of
//derivation is used
class base{
public:
  virtual void vfunc(){
    cout<<"This is base's vfunc().\n";
  }
};
class derived1 :public base{
public:
  void vfunc(){    cout<<"this is derived1's vfunc().\n";}
};
class derived2 :public derived1{
public:
  // vfunc() not override by derived2 . In this case ,since derived2 is
  //derived2 is derived form derived1 ,derived1's vfunc() is used
};
int main()
{
  base *p,b;
  derived1 d1;
  derived2 d2;
  //point to base
  p=&b;
  p->vfunc();//access base's vfunc();
  //point to derived1
  p=&d1;
  p->vfunc();//access derived1'vfunc()
  //point to derived2
  p=&d2;
  p->vfunc();//access derived2's vfunc()

  return 0;
}

