#include<iostream>
using namespace std;

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
  void vfunc(){    cout<<"this is derived2's vfunc().\n";}
};
//use a base class reference parmenter
void f(base &r)
{
  r.vfunc();
}
int main()
{
  base b;
  derived1 d1;
  derived2 d2;

  f(b);//pass a base object to f()
  f(d1);//pass a derived1 object to f()
  f(d2);//pass a derived2 object to f()

  return 0;
}

