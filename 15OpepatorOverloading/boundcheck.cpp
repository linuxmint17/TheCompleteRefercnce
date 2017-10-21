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
class atype{
  int a[3];
public:
  atype(int i,int j,int k){
    a[0]=i;
    a[1]=j;
    a[2]=k;
  }
  int & operator[](int i){
    if(i<0||i>2)
      {
	cout<<"Boundary Error\n";
	exit(-2);
      }
	return a[i];}
};
int main(void)
{
  atype ob(1,2,3);
  cout<<ob[1];//display 2
  cout<<endl;
  ob[1]=25;//[] on left of =
  cout<<ob[1];//now displays 25
  cout<<endl;
  ob[3]=234;//generaes error;
  cout<<endl;
  return 1;
}

