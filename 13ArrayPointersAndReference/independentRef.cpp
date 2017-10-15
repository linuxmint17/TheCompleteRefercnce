#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
//when you create an independent reference ,all you are creating is another
//name for an object
//No.1 All independent references must be initialized when they created
//The reason for this is easy to understand .Aside from initialization.
//you can not change what object a reference variable points to.
//In C++ ,initialization is a wholly separate operation from assignment.
int main(void)
{
  int a;
  int &ref=a;//independent reference
  a=10;
  cout<<a<<" "<<ref<<endl;
  ref=100;
  cout<<a<<" "<<ref<<endl;

  int b=19;
  ref=b;//this put b's value into a
  cout<<a<<" "<<ref<<endl;

  ref--;//this decrements a
  // it does not affect what ref refers to
  cout<<a<<" "<<ref<<endl;
  
  return 0;
}
//a reference can also like pointer reference to derived types
//the most common application of this is found in function parmeters .
//A base class reference parameter can receive objects of the base class
//as well as any other type derived from that base

//the Restrictions to Reference
//No.1 You cannot reference another reference. Put differenctly ,you cannot
//obtain the address of a reference
//No.2 You cannot create arrays of refercences
//No.3 You cannot create a pointer to a reference
//No.4 You cannot reference a bit-field.
//No.5 A  reference variable must be initialized when it is declared unclared
//unless it is a member of a class ,a funciton parameter,or a return value.
//No.6 Null references are prohibited
