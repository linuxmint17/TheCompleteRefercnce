#include<iostream>
#include<list>
#include<functional>
#include<algorithm>
using namespace std;
//demonstarte bind2nd()

int main(){
  list<int > lst;
  list<int>::iterator p,endp;
  
  int i;

  //put values into list
  for(i=1;i<20;i++)lst.push_back(i);
  
  cout<<"Original coontents of vals:\n";
  p=lst.begin();
  while(p!=lst.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;

  endp=remove_if(lst.begin(),lst.end(),
		 bind2nd(greater<int>(),8));

  cout<<"Resulting sequence:\n";
  p=lst.begin();
  while(p!=endp){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  return 0;
}
