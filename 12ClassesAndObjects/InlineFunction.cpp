#include<iostream>
using namespace std;
inline int max(int a,int b)
{
  return a>b?a:b;
}
int main()
{
  cout<< max(10,20);
  cout<<"\n"<<max(99,88);
  return 0;
}
