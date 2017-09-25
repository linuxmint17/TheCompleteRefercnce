#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  //define anonymous union
  union{
    long l;
    double d;
    char s[4];
  };
  //now refercence union elements directly
  l=100000;
  cout<<1<<" ";
  d=123.2342;
  cout<<d<<" ";
  d=123.2342;
  cout<<d<<" ";
  strcpy(s,(char *)"hi");
  cout<<s<<endl;
  return 0;
}
