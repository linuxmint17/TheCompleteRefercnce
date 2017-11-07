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
//demonstrate using
using namespace std;
namespace CounterNameSpace{
  int upperbound;
  int lowerbound;

  class counter{
    int count;
  public:
    counter(int n){
      if(n<=upperbound)count=n;
      else count=upperbound;
    }
    void reset(int n){
      if(n<=upperbound) count=n;
    }
    int run(){
      if(count>lowerbound) return count--;
      else return lowerbound;
    }
  };
}
       
int main(void)
{
  //use only upperbound from CounterNameSpace
    using CounterNameSpace::upperbound;
  //now ,no qualification needed 
  upperbound=100;
  //qualification still needed fo lowerbound
  CounterNameSpace::lowerbound=0;

  CounterNameSpace::counter ob1(10);
  int i;
  do{
    i=ob1.run();
    cout<<i<<" ";
    }while(i>CounterNameSpace::lowerbound);
    cout<<endl;
    //now ,using entire COunterNameSpace
    using namespace CounterNameSpace;
    counter ob2(20);
    ob2.reset(100);
    lowerbound=90;
    do{
      i=ob2.run();
      cout<<i<<" ";
      }while(i>lowerbound);
    
    cout<<endl;
  return 1;
}
