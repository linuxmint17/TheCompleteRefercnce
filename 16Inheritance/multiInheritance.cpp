#include<iostream>
using namespace std;
class base{
public:
  base(){cout<<"Constructing base"<<endl;}
  ~base(){cout<<"Destructing base"<<endl;}

};
class derived1:public base{
public:
  derived1(){cout<<"Constructing derived1\n";}
  ~derived1(){cout<<"Destructing derived2\n";}
};
class derived2:public derived1{
public:
  derived2(){cout<<"Constructing derived2\n";}
  ~derived2(){cout<<"Destructing derived2\n";}
};
int main(void)
{
 derived2  ob;
  //construct and destruct ob
  return 0;
}
//Here, derived's constructor is declared as taking two parameters, x and y. However,
//derived( ) uses only x; y is passed along to base( ). In general, the derived class' constructor
//must declare both the parameter(s) that it requires as well as any required by the base
//class. As the example illustrates, any parameters required by the base class are passed
//to it in the base class' argument list specified after the colon.
