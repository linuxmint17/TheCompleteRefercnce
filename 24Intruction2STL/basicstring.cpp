#include<iostream>
#include<string>
using namespace std;
//show usage of insert(),erase and replace()
int main(){
  string str1("String handleing C++ style");
  string str2("STL Power");

  cout<<"Initial strings: \n";
  cout<<"str1: "<<str1<<endl;
  cout<<"str2: "<<str2<<endl;

  //demo insert()
  cout<<"insert str2 into str2: \n";
  str1.insert(6,str2);
  cout<<str1<<endl<<endl;
  //demo erase()
  cout<<"Remove 8 characters from str1:\n";
  str1.erase(6,9);
  cout<<str1<<endl<<endl;
  //demo replace()
  cout<<"replace 8 characters in str1 with str2:\n";
  str1.replace(7,8,str2);
  cout<<str1<<endl<<endl;
  
  
  return 0;
}
