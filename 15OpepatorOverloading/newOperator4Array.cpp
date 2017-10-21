#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<new>
using namespace std;
class loc{
  int longitude ,latitude;
public:
  loc(){}
  loc(int lg,int lt){
    longitude=lg;
    latitude=lt;
  }
  void show(){
    cout<<longitude<<" ";
    cout<<latitude<<endl;
  }
  void *operator new[](size_t size);
    void operator delete[](void *p);
};
//global new
void * operator new(size_t size)
{
  void *p;
  cout<<"In overloaded global  new.\n";
  p=malloc(size);
  if(!p){
    bad_alloc ba;
    throw ba;
}
  return p;
}
//global delete 
void  operator delete(void *p)
{
  cout<<"In overloaded global delete.\n";
  free(p);
}
void * loc::operator new [](size_t size)
{
  void *p;
  cout<<"Using overload new[].\n";
  p=malloc(size);
  if(!p){
    bad_alloc ba;
    throw ba;
  }
  return p;
}
void loc::operator delete[](void *p)
{
  cout<<"Free ing array using overloaded delete[]\n";
  free(p);
}
int main()
{
  int i;
  loc *p1,*p2;
 
  try{
      p1 = new loc (10,20);//allocate an object 
  }catch(bad_alloc xa){
    cout<<"Allocation error for p1.\n";
    return 1;
  }

  try{
    p2 = new loc [10];//allocate an array;
  }catch(bad_alloc xa){
    cout<<"Allocation error for p2.\n";
    return 1;
  }


  p1->show();
  for(i=0;i<10;i++)
  p2[i].show();
  delete p1;
  delete [] p2;

  return 1;
}
