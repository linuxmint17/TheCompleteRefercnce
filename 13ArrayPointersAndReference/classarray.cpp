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
  int i;
public:
  cl(int k){i=k;}
  int get_i(){return i;}
};
int main(void)
{
  cl ob[3] = {1,2,3};//initializers
  int i;
  for(i=0;i<3;i++)
    cout<<ob[i].get_i()<<endl;

  return 0;
}
