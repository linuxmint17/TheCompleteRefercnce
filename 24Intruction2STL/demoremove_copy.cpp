#//demonstrate remove_copy and replace_copy
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  char str[]="The STL is power programming.";
  vector<char> v,v2(30);
  unsigned int i;
  for(i=0;str[i];i++) v.push_back(str[i]);
  //*** demonstate remove_copy***
  cout<<"Input sequence:\n";
    for(i=0;i<v.size();i++)
      cout<<v[i];
      cout<<endl;
  //remove all spaces
  remove_copy(v.begin(),v.end(),v2.begin(),' ');

  cout<<"result after remove space :\n";
  for(i=0;i<v2.size();i++)cout<<v2[i];
  cout<<endl;
  cout<<endl<<endl;
  //***now ,demonstarte replace_copy***
  cout<<"Input sequence:\n";
  for(i=0;i<v.size();i++)cout<<v[i];
  cout<<"\n";

  //replace sapce with colons
  replace_copy(v.begin(),v.end(),v2.begin(),' ',':');

  cout<<"result after replacing sapce with colon\n";
for(i=0;i<v2.size();i++)cout<<v2[i];
cout<<endl;
return 0;
}
