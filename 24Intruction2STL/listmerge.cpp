#include<iostream>
#include<list>
using namespace std;
//merge two lists

int main(){
  list<int> lst1,lst2;
  int i;
  for(i=0;i<10;i+=2) lst1.push_back(i);
  for(i=1;i<11;i+=2) lst2.push_back(i);

  cout<<"contents of lst1:\n";
  list<int>::iterator p=lst1.begin();
  while(p!=lst1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";
  //now ,merge the two lists
    cout<<"contents of lst2:\n";
 p=lst2.begin();
  while(p!=lst2.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";

  lst1.merge(lst2);
  if(lst2.empty())
    cout<<"lst2 is now empty\n";

  cout<<"contents of lst1 after merge:\n";
  p=lst1.begin();
  while(p!=lst1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<'\n';
  return 0;
}
