
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{  
	   int j=i-1,k=a[i];
	  while(a[j]>k and j>=0)
	  {   
	     a[j+1]=a[j];
		 j--;
	  }
	  a[j+1]=k;
    }	
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
