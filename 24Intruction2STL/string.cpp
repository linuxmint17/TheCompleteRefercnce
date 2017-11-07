#include<iostream>
#include<string>
using namespace std;
//a short strig demostartion
int main(){
  string str1("Alpha");
  string str2("Beta");
  string str3("Omega");
  string str4;

  //asssign a string
  str4=str1;
  cout<<str1<<endl;
  cout<<str4<<endl;

  //concatenate two strings
  str4=str1+str2;
  cout<<str4<<"\n";

  //concatenate a string with C-string
  str4=str1+" to " +str3;
  cout<<str4<<endl;

  //compare strings
  if(str3>str1) cout<<"Str3 >str1\n";
  if(str3==str1+ str2)
    cout<<"str3== str1+str2";

  //a string object can also be assigned a normal string.
  str1="This is a null-terminated string.\n";
  cout<<str1;

  //create astring object using  another string object
  string str5(str1);
  cout<<str5;

  //input a string
  cout<<"enter a string: ";
  cin>>str5;
  cout<<str5;
  cout<<endl;  
  return 0;
}
