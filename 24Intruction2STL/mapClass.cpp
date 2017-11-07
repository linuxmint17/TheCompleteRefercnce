#include<iostream>
#include<map>
#include<cstring>
using namespace std;
//use a map to creat a phone directory.
class name{
  char str[40];
public:
  name(){strcpy(str,"");}
  name(char *s){strcpy(str,s);}
  char *get(){return str;}
};
//must define less than relative to name objects
bool operator<(name a,name b){
  return strcmp(a.get(),b.get())<0;
}
class phoneNum{
  char str[80];
public:
  phoneNum(){strcpy(str,"");}
  phoneNum(char *s){strcpy(str,s);}
  char *get(){return str;}
};
int main(){
  map<name,phoneNum> directory;
  //put names and numbers into map
  directory.insert(pair<name,phoneNum>(name((char *)"Tom"),
				       phoneNum((char *)"555-4533")));
  directory.insert(pair<name,phoneNum>(name((char *)"Chris"),
				       phoneNum((char *)"555-9678")));
      directory.insert(pair<name,phoneNum>(name((char *)"John"),
				       phoneNum((char *)"555-8195")));
      directory.insert(pair<name,phoneNum>(name((char *)"Rachel"),
					   phoneNum((char *)"555-0809")));

      //give a name ,find number
      char str[80];
      cout<<"Enter name : ";
      cin>>str;

      map<name,phoneNum>::iterator p;
      p=directory.find(name(str));

      if(p!=directory.end())
	cout<<"Phone number: "<<p->second.get();
      else
	cout<<"Name not in map\n";

	  cout<<'\n';
      return 0;
}
    
      
