#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
template <class Type1,class Type2> class myclass
{
  Type1 i;
  Type2 j;
public:
  myclass(Type1 a,Type2 b){i=a;j=b;}
  void show(){cout<<i<<' '<<j<<j<<endl;;}
};
int main(void)
{
  myclass<int ,double> ob1(10,0.23);
  myclass<char,char*> ob2('X',(char *)"Templates add power");

  ob1.show();//show int ,double 
  ob2.show();//show char ,char*
  
  return 0;
}
