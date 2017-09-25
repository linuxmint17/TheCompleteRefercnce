#include<iostream>
using namespace std;
class myclass{
  int a,b;
public:
  myclass(int i,int j){a=i;b=j;}
  void show(){cout<<a<<" "<<b<<endl;}
};
int main()
{
  myclass ob(3,5); // myclass ob=myclass(3,5);
  // in fact ,there are a litte difference in above declation
  ob.show();
  return 0;
}
