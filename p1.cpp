//WAP to find largest of three numbers
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter three numbers:";
  cin>>a>>b>>c;
  if(a>=b&&a>=c)
  {
   cout<<"largest no is:"<<a;
  }
  if(b>=a&&a>=c)
  {
   cout<<"largest no is:"<<b;
  }
  if(c>=a&&c>=b)
  {
   cout<<"largest no is:"<<c;
  }
  return 0;
}
