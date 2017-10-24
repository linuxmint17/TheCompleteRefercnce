#include<iostream>
using namespace std;
//1.a base class may not be able to define an object sufficiently to
//allow a base-class virtual function to be created.
//2.in some situations you will want to ensure that all derived classes
//override a virtual function. To handle these two cases, C++ supports
//the pure virtual function.
//3.A pure virtual function is a virtual function that has no definition within the base
//4.When a virtual function is made pure, any derived class must provide its own
//definition. If the derived class fails to override the pure virtual function, a compile-time error will result.
class number{
protected:
  int val;
  public:
  void setval( int i){ val=i;}
  //show() is a pure virtual function
  virtual void show()=0;
};
class hextype :public number{
public:
  void show(){
    cout<<hex<<val<<"\n";
  }
};
class dectype :public  number{
public:
  void show(){    cout<<val<<endl;}
};
class octtype:public number{
public:
  void show(){
    cout<<oct<<val<<"\n";
  }
};
int main()
{
  dectype d;
  hextype h;
  octtype o;
  d.setval(20);
  d.show();//display 20 - decimal

  o.setval(20);
  o.show();//display 24 -octal

  return 0;
}

/*A class that contains at least one pure virtual function is said to be abstract. Because an
abstract class contains one or more functions for which there is no definition (that is,
a pure virtual function), no objects of an abstract class may be created. Instead, an abstract
class constitutes an incomplete type that is used as a foundation for derived classes.
Although you cannot create objects of an abstract class, you can create pointers
and references to an abstract class. This allows abstract classes to support run-time
polymorphism, which relies upon base-class pointers and references to select the
proper virtual function
*/
