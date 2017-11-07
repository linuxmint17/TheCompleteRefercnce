#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//demonstarte reverse
int main(){
  vector<int> v;
  unsigned int i;

  for(i=0;i<10;i++) v.push_back(i);

  cout<<"Initial: ";
  for(i=0;i<v.size();i++)cout<<v[i];
  cout<<endl;
  reverse(v.begin(),v.end());

  cout<<"reversed: ";
  for(i=0;i<v.size();i++)cout<<v[i];
  cout<<'\n';
  return 0;
}
