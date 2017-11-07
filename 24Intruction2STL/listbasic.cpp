#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> lst;//create an empty list
  int i;

  for(i=0;i<10;i++)lst.push_back(i);
  cout<<"Size = "<<lst.size()<<"\n";

  cout<<"Contents: ";
  list<int>::iterator p=lst.begin();
  while(p!=lst.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";
  //change contents of list
  p=lst.begin();
  while(p!=lst.end()){
    *p+=100;
    p++;
  }
  cout<<"contents modified: ";
  p=lst.begin();
  while(p!=lst.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";
  return 0;
}
