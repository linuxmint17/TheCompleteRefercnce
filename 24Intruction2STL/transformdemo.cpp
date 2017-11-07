#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
//an example of the transform algorithm

//a simple tranformation funciton
double reciprocal(double i){
  return 1.0/i;//return reciprocal
}
int main(){
  list<double> vals;
  int i;
  //put valuees into list
  for(i=0;i<10;i++) vals.push_back(i);

  cout<<"Original contents of vals: \n";
  list<double>::iterator p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;

  //transform vals
  p=transform(vals.begin(),vals.end(),
	      vals.begin(),reciprocal);

  cout<<"Transformed contents of vals:\n";
  p=vals.begin();
  while(p!=vals.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  return 0;
}
