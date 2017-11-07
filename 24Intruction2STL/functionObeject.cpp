#include<iostream>
#include<list>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
  list<double> vals;
  int i;
  //put values into list
  for(i=1;i<10;i++) vals.push_back((double)i);
  
  cout<<"Original contents:\n";
  list<double>::iterator p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  //use the negate function object
  p=transform(vals.begin(),vals.end(),
	      vals.begin(),
	      negate<double>());//call function object

  cout<<"Negated contents of vals:\n";
  p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  return 0;
}
