#include<iostream>
#include<new>
using namespace std;
int main()
{
    cout<<"start\n";
    try{//start a try block
        cout<<"Inside try block\n";
        throw 100;//throw an error
        cout<< "this will not execute\n";
     }
     catch (int i){//catch an error
      cout<< "caught an exception --value is "<<i<<"\n";
      
      }
      cout<<"End";
}
