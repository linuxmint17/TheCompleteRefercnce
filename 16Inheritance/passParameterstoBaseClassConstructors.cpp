#include<iostream>
using namespace std;
class base{
protected:
  int i;
public:
  base(int x){i=x;cout <<"constructing base\n";}
  ~base(){cout<<"Destructing base\n";}
};
class derived: public base{
  int j;
public:
  //derived  use x;y is passed along to base
  derived(int x,int y):base(y)
  {j=x;cout<<"Constructing derived\n";}
  ~derived(){cout<<"Destructing derived\n";}
  void show(){cout<<i<<" "<<j<<endl;}
};
int main(void)
{
  derived ob(3,4);
  ob.show();//display 4 3
  return 0;
}
