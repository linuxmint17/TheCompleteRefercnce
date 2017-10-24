#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<typeinfo>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
template <class T>
class Num{
public:
  T val;
  Num(T x){val=x;}
  virtual T getval(){ return val;}
  //...
};
template <typename T>
class SqrNum:public Num<T>{
public:
  SqrNum(T x):Num<T>(x){}
  T getval(){return val * val;}

};

int main(void)
{
  Num<int> *bp,numTnt_ob(2);
  SqrNum<int> *dp,sqrInt_ob(3);
  Num<double> numDouble_ob(3.3);

  bp=dynamic_cast<Num<int> *>(& sqrInt_ob);
  if(dp)
    cout<<"Error\n";
  else{
    cout<<"cast from Num<int> * to SqrNum<int> * not OK.\n";
    cout<<"Can't cast a pointer to a base object into \n";
    cout<<"a pointer to a derived object.\n";
  }
  cout<<endl;

  bp=dynamic_cast<Num<int> *> (&numDouble_ob);
  if(bp)
    cout<<"error\n";
  else
    cout<<"cant cast from Num<double>* to Num<int> *.\n";
  cout<<"these are two different types.\n";
  
  return 1;
}
