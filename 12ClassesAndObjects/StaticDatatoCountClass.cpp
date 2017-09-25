#include<iostream>
using namespace std;
class Counter{
public:
  static int counter;
  Counter(){counter++;}
  ~Counter(){counter--;}
};
int Counter::counter;
void f();
int main()
{
  Counter o1;
  cout<<"Objects in existence:";
  cout<<Counter::counter<<endl;
  Counter o2;
  cout<<"Objects in existence:";
  cout<<Counter::counter<<endl;
  f();
  cout<<"Objects in existence:";
  cout<<Counter::counter<<endl;
  
 return 0;
}

void f()
{
  Counter temp;
  cout<<"Objects in existence:";
    cout<<Counter::counter<<endl;
  //temp is destory when f() returns
}
