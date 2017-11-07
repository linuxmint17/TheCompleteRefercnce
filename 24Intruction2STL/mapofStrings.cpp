#include<iostream>
#include<string>
#include<map>
using namespace std;
//use a map of strings to create a phone directory
int main(){
  map<string,string>directory;
  directory.insert(pair<string,string>("Tom","555-4533"));
  directory.insert(pair<string,string>("Chris","555-9678"));
  directory.insert(pair<string,string>("Tom","555-8195"));
  directory.insert(pair<string,string>("Tom","555-0809"));

  string s;
  cout<<"Enter  Nmae:\n";
  cin>>s;
  map<string,string>::iterator p;
  p=directory.find(s);
  if(p!=directory.end())
    cout<<"Phone number: "<<p->second<<endl;
  else
    cout<<"Name not in drectory\n";
  
	
  return 0;
}
