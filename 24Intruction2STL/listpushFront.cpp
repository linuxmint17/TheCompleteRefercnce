//demonstrating the difference between push_back() and push_front()
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> lst1,lst2;
  int i;
  for(i=0;i<10;i++) lst1.push_back(i);
  for(i=0;i<10;i++) lst2.push_front(i);

  list<int>::iterator p;

  cout<<"contents of lst1:\n";
  p=lst1.begin();
  while(p!=lst1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<'\n';
  
  cout<<"contents of lst2:\n";
  p=lst2.begin();
  while(p!=lst2.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";
  return 0;
}
