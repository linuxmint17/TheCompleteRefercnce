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
//use  const_cast on a const reference




void sqrval(const int &val)
{

  //cast away const on val
  const_cast<int &> (val)=val*val;

}
int main(void)
{
  int x=10;
  cout<<"x before call: \n"<<x<<endl;
  sqrval(x);
  cout<<"x after call:\n"<<x<<endl;
  
  return 1;
}
