#include<iostream>
using namespace std;
//when a functiono is declared as virtual by a base class ,it may be
//overridden by a derived class.However the function does not have to be
//overridden.
//when a derived class fails to override a virtual function ,then when
//an object of that derived class accesses that function ,the function defined
//by the base class is used
//4.A class that contains at  least one pure virtual function said to be abstrat.

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
class derived2 :public base{
public:
  //vfunc() not overridden by derived2 ,the base version vfunc() is used
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
