//WAP to do insertion sort on an integer array
#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i,j,temp;
  cout<<"enter size of array:";
  cin>>n;
  cout<<"enter elements of array:";
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=1;i<n;i++)
  {
   temp=a[i];
   j=i-1;
   while((temp<a[j])&&(j>=0))
     {
      a[j+1]=a[j];
      j=j-1;
     }
     a[j+1]=temp;
   }
  cout<<"the sorted array is:";
  for(i=0;i<n;i++)
  {
   cout<<a[i]<<" ";
   }
  return 0;
}
