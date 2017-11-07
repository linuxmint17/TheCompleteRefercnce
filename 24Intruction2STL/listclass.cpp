#include<iostream>
#include<list>
#include<cstring>
using namespace std;
//store class objects in a list
//already know bug:
//+= operator cant not access private variable sum when overloading as a friend function
//
class myclass{
  int a,b;
  int sum;
public:
  myclass(){a=b=0;}
  myclass(int i,int j){
    a=i;
    b=j;
    sum=a+b;
  }
  int getsum(){return sum;}
  friend bool operator<(const myclass &o1,
			const myclass &o2);
  friend bool operator>(const myclass &o1,
			const myclass &o2);
  friend bool operator==(const myclass &o1,
			 const myclass &o2);
  //friend bool operator!=(const myclass &o1,
  //			 const myclass &o2);
  };
bool operator<(const myclass &o1,const myclass &o2){
  return o1.sum<o2.sum;
}
bool operator>(const myclass &o1,const myclass &o2){
  return o1.sum>o2.sum;
}
bool operator==(const myclass &o1,const myclass &o2){
  return o1.sum==o2.sum;
}
//bool operator!=( myclass &o1,const myclass &o2){
//return o1.sum != o2.sum;
//}
int main(){
  int i;
  //create first list
  list<myclass> lst1;
  for(i=0;i<10;i++) lst1.push_back(myclass(i,i));

  cout<<"First list: ";
  list<myclass>::iterator p=lst1.begin();
  while(p!=lst1.end()){
    cout<<p->getsum()<<" ";
    p++;
  }
  cout<<'\n';

  //create second list
  list<myclass> lst2;
    for(i=0;i<10;i++) lst2.push_back(myclass(i*2,i*3));

    cout<<"scecond list: ";
    p=lst2.begin();
  while(p!=lst2.end()){
    cout<<p->getsum()<<" ";
    p++;
  }
  cout<<'\n';
  //now merge lst1 and lst2
  lst1.merge(lst2);
  //display merged list
  cout<<"Merged list: ";
  p=lst1.begin();
  while(p!=lst1.end()){
    cout<<p->getsum()<<" ";
    p++;
  }
  cout<<'\n';
  return 0;

}

