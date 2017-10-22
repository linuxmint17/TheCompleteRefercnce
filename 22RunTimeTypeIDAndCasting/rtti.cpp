#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<typeinfo>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
class myclass1{
  //...
};
class myclass2{
  //...
};
int main(void)
{
  int i,j;
  float f;
  char *p=NULL;
  myclass1 ob1;
  myclass2 ob2;
  cout<<"The type of i is:"<<typeid(i).name();
  cout<<endl;
  cout<<"The type of f is:"<<typeid(f).name();
  cout<<endl;
  cout<<"The type of p is:"<<typeid(p).name();
  cout<<endl;
   
  cout<<"The type of  ob1 is:"<<typeid(ob1).name();
  cout<<endl;
  cout<<"The type of ob2 is:"<<typeid(ob2).name();
  cout<<endl;

  if(typeid(i)==typeid(j))
    cout<<"The types of i and j are the same\n";
  if(typeid(i)!=typeid(f))
    cout<<"the type of i and f are not the same\n";
  
  if(typeid(ob1)!=typeid(ob2))
    cout<<"ob1 and ob2 are of different  types\n";
  return 1;
}
