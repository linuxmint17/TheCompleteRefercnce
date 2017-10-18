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
//Demonstrate class specialization 
template <class T> class myclass{
  T x;
public:
  myclass(T a){
    cout<<"Inside generic myclass \n";
    x=a;
  }
  T getx(){return x;}
};

//Explicit specialization for int
template <> class myclass<int>{
  int x;
public:
  myclass(int a){
    cout<<"inside myclass<int> specialization\n";
    x=a*a;
  }
  int getx(){return x;}
};
int main(void)
{
  myclass<double> d(10.);
  cout<<"dobule : "<<d.getx()<<endl;
  myclass<int> i(5);
  cout<<"int :" <<i.getx()<<endl;

  return 0;
}
