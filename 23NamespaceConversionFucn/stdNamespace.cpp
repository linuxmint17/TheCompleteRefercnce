#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//Bring only a few name into the global namespace
//using std::cout,std::cin; //this can be allow with -Wc++1z-extension
using std::cout;
using std::cin;
using std::hex;
int main(void)
{
  int val;
  cout<<"enter a number\n";
  
  cin>>val;
  cout<<"this is you number\n";

  cout<<hex<<val;
  cout<<"\n";
  return 1;
}
