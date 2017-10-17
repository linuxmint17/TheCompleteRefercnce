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

const int SIZE=10;
template <typename AType>
class atype{
  AType a[SIZE];
public:
  atype(){
    register int i;
    for(i=0;i<SIZE;i++) a[i]=i;
  }
  AType &operator[](int i);
};
//Provide range check for atype.
template <typename AType >AType &atype<AType>::operator[](int i)
{
  if(i<0||i>SIZE-1){
    cout<<"\nIndex value of ";
    cout<<i<<" is out-of-bound"<<endl;
    exit(1);
    return a[i];
  }
}
  
int main(void)
{
  atype<int> intob;//integer array
  atype<double> doubleob;//double array
  
  int i;
  cout<<"Integer array:";
  for(i=0;i<SIZE;i++) intob[i]=i;
  for(i=0;i<SIZE;i++)cout<< intob[i]<<" ";
  cout<<endl;

  intob[12]=100;//generates runtime error
  return 0;
	     
}
