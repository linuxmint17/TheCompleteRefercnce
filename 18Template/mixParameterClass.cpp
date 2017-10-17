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

//demonstrate onn-type template arguments

template <class AType ,int size > class atype{
  AType a[size];//length of array is passed in size
public:
  atype(){
    register int i;
    for(i=0;i<size;i++) a[i]=i;
  }
  AType &operator[](int i);
};
//Provide range check for atype.
template <typename AType,int size >
AType &atype<AType,size>::operator[](int i)
{
  if(i<0||i>size-1){
    cout<<"\nIndex value of";
    cout<<i<<"is out-of-bounds"<<endl;
    exit(1);
    return a[i];
  }
};
  
int main(void)
{
  atype<int,10> intob;//integer array of size 10
  atype<double,15> doubleob;//double array of size 15
  
  int i;
  cout<<"Integer array:";
  for(i=0;i<10;i++) intob[i]=i;
  for(i=0;i<10;i++)cout<< intob[i]<<" ";
  cout<<endl;


  cout<<"double  array:";
  for(i=0;i<15;i++) doubleob[i]=(double)i/3;
  for(i=0;i<15;i++)cout<< doubleob[i]<<" ";
  cout<<endl;

  intob[12]=100;//generates runtime error
  return 0;
	     
}
