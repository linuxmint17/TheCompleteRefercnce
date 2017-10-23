#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<cctype>
//Access the elements of a vector through an iterator
using namespace std;
int main()
{
  vector<char> v(10);//create a vector of length 10
  vector<char>::iterator p;//create an iterator
  int i;

  //assign elements in vector a value
  p=v.begin();
  i=0;
  while(p!=v.end()){
    *p=i+'a';
    p++;
      i++;
  }
  //display contents of vector
  cout<<"original contents :\n";
  p=v.begin();
  while(p!=v.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;

  //change contents of vector
  p=v.begin();
  while(p!=v.end()){
    *p=toupper(*p);
    p++;
  }
  //display contents of vector
  cout<<"modified contents \n";
  p=v.begin();
  while(p!=v.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  
	return 0;
	
}

