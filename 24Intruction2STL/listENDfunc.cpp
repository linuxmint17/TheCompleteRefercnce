#include<iostream>
#include<list>
using namespace std;
//understanding end function
//
//end( ) does not return a pointer to the last element in a container.
//Instead, it returns a pointer one past the last element. Thus, the last element in a container is pointed to by end( ) - 1.
int main(){
  list<int> lst;//crate an empty list
  int i;
  for(i=0;i<10;i++) lst.push_back(i);
  cout<<"List printed forwards:\n";
  list<int>::iterator p=lst.begin();
  while(p!=lst.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<"\n";
  
  cout<<"list printed backwards:\n";
  p=lst.end();
  while(p!=lst.begin()){
    //    p--;//decrement pointer first before using it
    cout<<*p<<" ";
    p--;
  }
  cout<<"\n";
  return 0;
}
