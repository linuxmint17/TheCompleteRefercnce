#include<iostream>
using namespace std;
class base1{
public:
  base1(){cout<<"construct base1"<<endl;}
   ~base1(){cout<<"Destruct base1"<<endl;}
};
class base2{
public:
  base2(){cout<<"construct base2"<<endl;}
   ~base2(){cout<<"Destruct base2"<<endl;}
};
class derived: public base2,public base1{
public:
  derived(){cout<<"constructing derived"<<endl;}
  ~derived(){cout<<"Destructing derived"<<endl;}
};
int main()
{
  derived ob;
  //construct and destruct ob
  return 0;
}
  
