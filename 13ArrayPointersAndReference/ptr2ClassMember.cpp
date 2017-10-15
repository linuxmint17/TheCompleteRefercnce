#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
  class cl{
  public:
    cl(int i){val=i;}
    int val;
    int double_val(){return val+val;}
  };

int main(void)
{
  int cl::*data;//data member pointer
  int (cl::*func)();//function member pointer
    cl ob1(1),ob2(2);//create objects
  
  data=&cl::val;//get offset of val
  func=&cl::double_val;//get offset of double_val()
  
  cout<<"here are values: ";
  cout<<ob1.*data<<" " <<ob2.*data<<endl;

  cout<<"here they are doubled :";
  cout<<(ob1.*func)()<<" ";
  cout<<(ob2.*func)()<<endl;
  
  return 0;
}
//C++ allows you to generate a special type of pointer that "points"
//genericall to a member of a class , not to a  specific instance of
//that memember in an object.Thsi soft of pointer is called  a pointer
//to  a class member or a pointer-to-member ,for short.A pointer to
// a member is not the same as a normal C++ pointer .Instead , a pointer
//to member provide only an offset into an object of the member's class
// at which that member can be found .Since member pointers are not true
//pointers ,the . and -> can not be applied to them. To access a member
//of a class given a pointer to it, you must use the special pointer-to-member
//opterators .* and ->* .Their job is  to allow you to access a member of a
//class given a pointer to that ember.
