#include<iostream>
#include<list>
#include<functional>
#include<algorithm>
using namespace std;
//create reciprocal function object
//A simple function object.
class reciprocal: unary_function<double,double>{
public:
  result_type operator()(argument_type i){
    return (result_type) 1.0/i;//return reciprocal
  }
};
int main(){
  list<double> vals;
  int i;

  //put values into list
  for(i=1;i<10;i++)vals.push_back((double)i);
  cout<<"Original coontents of vals:\n";
  list<double>::iterator p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;

  //use reciprocal function object
  p=transform(vals.begin(),vals.end(),
	       vals.begin(),
	       reciprocal());//call function object
  cout<<"Transformed contents of vals:\n";
  p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  return 0;
}
