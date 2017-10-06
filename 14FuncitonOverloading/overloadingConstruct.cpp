#include<iostream>
#include<cstdio>
#include<new>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;

//overloading constructor to gain flexibility
class date{
  int day,month,year;
public:
  date(char *d);
  date(int m,int d,int y);
  void show_date();
};
//Initialize using string
date::date(char *d)
{
 sscanf(d,"%d%*c%d%*c%d",&month,&day,&year);
}
//Initialize using integers
date::date(int m,int d,int y)
{
  day=d;month=m;year=y;
}
void date::show_date()
{
  cout<<month<<"/"<<day;
  cout<<"/"<<year<<endl;
}
//int main(void)
//{
//date ob1(12,4,2003),ob2((char *)"10/22/2017");
//ob1.show_date();
//ob2.show_date();
//return 0;
//}
int main(void)
{
  char s[80];
  cout<<"Enter new date: \n";
  cin>>s;
  date d(s);
  d.show_date();
  return 0;
}

