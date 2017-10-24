#include<iostream>
using namespace std;
int main()
{
  cout<<"__cplusplus is ";
  cout<<__cplusplus<<endl;
  cout<<"__TIME__ is the contains the time at which the program was compiled";
  cout<<endl;
  char time[]=__TIME__;
  cout<<"__TIME__ is ";
  cout<<time;
  cout<<endl;
  cout<<"__DATE__ macro contains a string of the form";
    cout<<" month/day/year that is the date of the";
    cout<<"translation of the source file into object code."<<endl;
  char date[]=__DATE__;
  cout<<"__DATE__ is ";
  cout<<date<<endl;
    
  return 1;
    
}
