#include<iostream>
#include<map>
using namespace std;
//a simple map demonstration
int main(){
  map<char ,int> m;
  int i;
  // put pairs into map
  for(i=0;i<=25;i++){
    //    m.insert(pair<char,int>('A'+i,65+i));
    m.insert(make_pair((char)('A'+i),65+i));
    
  }
  char ch;
  cout<<"Enter key:";
  cin>>ch;

  map<char,int>::iterator p;
  //find value given key
  p=m.find(ch);

  if(p!=m.end())
    cout<<"Its ASCII value is "<<p->second;
else
cout<< "key not in map.\n";
cout<<endl;
}
