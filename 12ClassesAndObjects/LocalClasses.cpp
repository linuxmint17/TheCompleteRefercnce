#include<iostream>
using namespace std;
void f();
int main()
{
  f();
  //myclass not known here
  return 0;
}
void f()
{
  class myclass{
    int i;
  public:
    void put_i(int n){i=n;}
    int get_i(){return i;}
  }ob;
  ob.put_i(10);
  cout<<ob.get_i();
}
/*When a class is declared within a function, it is known only to that function and
  unknown outside of it.*/
//Restrictions apply to local classes .
//No.1,all member functions must be define within
//the class declaration.
//NO.2 ,he local class may not use or access local
//variables of the function in which it is declared (except that a local class has access
// to static local variables declared within the function or those declared as extern).
//No.3 ,It may access type names and enumerators defined by the enclosing function,
//No.4 ,No static variables may be declared inside a local class
//Because the restrctions  ,it is not common in C++ programming
