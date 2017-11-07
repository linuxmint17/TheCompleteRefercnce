#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//strings as containers
int main(){
  string str1("Strings handling is easy in C++");
  string::iterator p;
  unsigned int i;

  //  use size()
  for(i=0;i<str1.size();i++)
    cout<<str1[i];
  cout<<endl;
  //use iterator
  p=str1.begin();
  while(p!=str1.end())
    cout<<*p++;
  cout<<endl;
  //use the count()algorithm
  i=count(str1.begin(),str1.end(),'i');
  cout<<"There are "<<i <<" i's in str1\n";

  //use transform() to upper case the string
  	    cout<<endl;
	    
  
  return 0;
}
