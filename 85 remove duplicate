#include<iostream>
 using namespace std;
 int main()
{   int n;
    cin>>n;
    int a[n],num[10];
    for(int i=0;i<10;i++)num[i]=0;
    for(int i=0;i<n;i++)
	{
	  cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
	  if(num[a[i]]==0)
	  {
	    num[a[i]]++;
	  }
	  else if(num[a[i]]!=0)
	   {
	        for(int j=i;j<n-1;j++)
	        {
	        	a[j]=a[j+1];
			}
		 n=n-1;
	   }	
	}
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
  return 0;
} 
