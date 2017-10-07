#include<iostream>
using namespace std;
class base1{
protected:
  int i;
public:
  base1(int x){i=x;cout<<"constructing base1\n";}
  ~base1(){cout<<"Destructing base1\n";}
};
class base2{
protected:
  int k;
public:
  base2(int x){k=x;cout<<"constructing base2\n";}
  ~base2(){cout<<"Destructing base2\n";}
};
class derived: public base1,public base2{
public:
  //Derived constructor uses no parameter,  but still must be declared as taking them to
  //  pass them along to base classes.
  derived(int x,int y):base1(x),base2(y)
  {cout<<"Constrcuting derived\n";}
  
  ~derived(){cout<<"Destructing derived\n";}
  void show(){cout<<i<<" "<<k<<" "<<endl;}
    
};
int main()
{
  derived ob(3,4);

  ob.show();//displays 4 3 5
  return 0;
}
//Aderived class' constructor is free to make use of any and all parameters that it is
//declared as taking, even if one or more are passed along to a base class. Put differently,
//passing an argument along to a base class does not preclude its use by the derived class
//as well. For example, this fragment is perfectly valid:
//class derived: public base {
//int j;
//public:
// derived uses both x and y and then passes them to base.
//derived(int x, int y): base(x, y)
//{ j = x*y; cout << "Constructing derived\n"; }
//One final point to keep in mind when passing arguments to base-class constructors:
//The argument can consist of any expression valid at the time. This includes function
//calls and variables. This is in keeping with the fact that C++ allows dynamic
//initialization.
