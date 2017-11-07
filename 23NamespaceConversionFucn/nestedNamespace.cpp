#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<new>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
//A namespace must be declared outside of all other scopes
//This means that you can not declare namespace that are localized to
//function.
//There is one exception:a namespace can be nested within another

namespace NS1{
  int i;
  namespace NS2{//a nested namespace
    int j;
  }
}



int main(void)
{
  NS1::i=19;
  // NS2::j=10;//Error NS2 is not in view
  NS1::NS2::j=10;//thisis right
  
  cout<<NS1::i<<" "<<NS1::NS2::j<<"\n";

  //use NS1
  using namespace NS1;
  //now that NS1 is in view ,NS2 can be used refer to j
  cout<<i*NS2::j<<endl;
  return 1;
}
