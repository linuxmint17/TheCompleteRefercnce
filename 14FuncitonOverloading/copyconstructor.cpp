#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
//this program creates a "safe" array class .Since space for the is allocated using new
//,a copy constructor is provided to allocate memory when one array objeect is used to initialize
// another
class array{
  int *p;
  int size;
public:
  array(int sz){
    try{ p=new int[sz]; }
    catch(bad_alloc xa){
      cout<<"allocation Failure\n";
      exit(EXIT_FAILURE);
    }
    size=sz;
  }
  ~array(){delete [] p;}
  //copy constructor
  array(const array &a);
  void put(int i,int j){if (i>=0&&i<size) p[i]=j;}
  int get(int i){ return p[i];}
};
array::array(const array &a){
  int i;

  try {p=new int[a.size];}
  catch(bad_alloc xa){
    cout<<"allocation Failure\n";
    exit(EXIT_FAILURE);
  }
  for(i=0;i<a.size;i++)p[i]=a.p[i];
}
int main(void)
{
  array num(10);
  int i;
  for(i=0;i<10;i++)num.put(i,i);
  for(i=9;i>=0;i--) cout<<num.get(i)<<" ";
  cout<<endl;
  //create another array and initialize with num
  array x(num);//invokes copy constructor
  for(i=0;i<10;i++)cout<<x.get(i)<<" ";
  cout<<endl;
  
  return 0;
}
//It is important to understand that C++ defines two distinct types of situations in
//which the value of one object is given to another. The first is assignment. The second is
//initialization, which can occur any of three ways:
//	■ When one object explicitly initializes another, such as in a declaration
//	■ When a copy of an object is made to be passed to a function
//      ■ When a temporary object is generated (most commonly, as a return value)
//myclass x=y; //y explicitly initilizing x
//func(y);//y passed as a parameter 
//y=func();//y receiving a temporay ,return object p
