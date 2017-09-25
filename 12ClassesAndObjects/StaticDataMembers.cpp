//Both function and data members of a class can be made static.
/*When you precede a member variable's declaration with static, you are telling the
compiler that only one copy of that variable will exist and that all objects of the class
will share that variable. Unlike regular data members, individual copies of a static
member variable are not made for each object. No matter how many objects of a class
are created, only one copy of a static data member exists. Thus, all objects of that class
use that same variable. All static variables are initialized to zero before the first object
is created.
When you declare a static data member within a class, you are not defining it. (That
is, you are not allocating storage for it.) Instead, you must provide a global definition
for it elsewhere, outside the class. This is done by redeclaring the static variable using
the scope resolution operator to identify the class to which it belongs. This causes storage
for the variable to be allocated. (Remember, a class declaration is simply a logical
construct that does not have physical reality.)
*/
#include<iostream>
using namespace std;
class shared{
  static int a;
  int b;
public:
  void set(int i,int j){a=i;b=j;}
  void show();
};
int shared::a ;//define a
void shared::show()
{
  cout<<"This is static a:"<<a;
  cout<<"\n This is non-static b:"<<b;
  cout<<"\n";
}
int main()
{
  shared x,y;
  x.set(1,1);//set a to 1
  x.show();

  y.set(2,2);//change a to 2
  y.show();

  x.show();//here ,a has been change fo both xand y
  //because it is shared by both bojects
  return 0;
}
