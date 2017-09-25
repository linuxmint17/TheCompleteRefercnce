#include<iostream>
using namespace std;
class myclass{
public:
  int who;
  myclass(int id);
  ~myclass();
}glob_ob1(1),glob_ob(2);
myclass::myclass(int id)
{
  cout<<"Initializing " <<id<<endl;
  who=id;
}
myclass::~myclass()
{cout<<"Destructing "<< who << endl;
}
int main()
{
  myclass local_ob1(3);
  cout<<"This will not be the first line displayed\n";
  myclass local_ob2(4);
  return 0;
}
