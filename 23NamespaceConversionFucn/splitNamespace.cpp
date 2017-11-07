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
//There may be more than one namespace declaration of the same name.
//This allows a namespace to be split over serval files or eve serarated
//within the same file
namespace NS1{
  int i;
}
//...
namespace NS2{
  int j;
}
int main(void)
{
  NS1::i=NS2::j=10;
  //refer to NS specifically
  cout<<NS1::i*NS2::j<<endl;
  using namespace NS1;
  cout<<i*NS2::j<<endl;
  return 1;
}
