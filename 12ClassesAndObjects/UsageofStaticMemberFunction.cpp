/*Actually, static member functions have limited applications, but one good use
for them is to "preinitialize" private static data before any object is actually created. For
example, this is a perfectly valid C++ program:
*/
#include<iostream>
using namespace std;
class static_type{
  static int i;
public:
  static void init(int x){i=x;}
  void show(){cout<<i;}
};
int static_type::i ;//define i
int main()
{
  //init static data object creation
  static_type::init(100);
  static_type x;
  x.show();//displays 100
  return 0;
}
