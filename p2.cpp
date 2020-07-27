//WAP to find second largest and second minimum no of an integer array
#include<iostream>
using namespace std;
int main()
{
  int A[10],n,i,j,temp;
  cout<<"enter size of array:";
  cin>>n;
  cout<<"enter elements of array:";
  for(i=0;i<n;i++)
  cin>>A[i];
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(A[i]<A[j])
     {
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
     }
   }
  }
  cout<<"the second largest no is:"<<A[1]<<endl;
  cout<<"the second minimum no is:"<<A[n-2];
  return 0;
}
