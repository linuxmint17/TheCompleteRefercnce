#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
class cl{
public:
  int i;
  cl(int j){i=j;}
};
int main(void)
{
  cl ob(1);
  int *p;
  p=&ob.i;//get address of ob.i
  cout<<*p<<endl;;//access ob.i via p
  return 0;
}
