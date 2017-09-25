#include<iostream>
#include<cstring>
using namespace std;
//It is possible to grant a nonmember function access to the private members
// of a class by using a friend. A friend function has access to all private 
//and protected members of the class for which it is a friend .
class myclass{
  int a,b;
public:
  friend int sum(myclass x);
  void set_ab(int i,int j);
};
void myclass::set_ab(int i,int j)
{
  a=i; 
  b=j;
}
//Note:sum() is not a member function of any class.
int sum(myclass x)
{
  /*Because sum() is  a friend of myclass ,it can
  directly access a and b;
  */
  return x.a+x.b;
}
int main()
{
  myclass n;
  n.set_ab(20,30);
  cout<<sum(n)<<endl;
  return 0;
}
