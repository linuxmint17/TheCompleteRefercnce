#include <iostream>
using namespace std;
class base {
public:
  int i;
};
// derived1 inherits base as virtual
class derived1 : virtual public base {
public:
  int j;
};
// derived2 inherits base as virutal.
class derived2 : virtual public base {
public:
  int k;
};
/* derived3 inherits both derived1 and derived2.
This time,there is only one copy of base class
in derived3! */
class derived3 : public derived1, public derived2 {
public:
  int sum;
};
int main()
{
  derived3 ob;

  ob.i=10;// unambiguous
  ob.j = 20;
  ob.k = 30;
  ob.sum=ob.i+ob.j+ob.k;
  cout << ob.i << " ";
  cout << ob.j << " " << ob.k << " ";
  cout << ob.sum<<endl;
  return 0;
}
//The only difference between a normal base class and a virtual one is what occurs
//when an object inherits the base more than once.
//. If virtual base classes are used, then
//only one base class is present in the object. Otherwise, multiple copies will be found.
