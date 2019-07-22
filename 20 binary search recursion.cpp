#include<iostream>
using namespace std;
int binsearch(int *arr,int l,int r,int f)
{  if(l<r)
   {
	int m=(l+r)/2;
	if(arr[m]==f)
	{
	  return m+1;
    }
    else if(arr[m]>f)
    {
    	binsearch(arr,l,m,f);
	}
	else if(arr[m]<f)
	{
		binsearch(arr,m+1,r,f);
	}
   }
   else
     return -1;
}
int main()
{
   int s,f;
   cin>>s;
   int a[s];
   for(int i=0;i<s;i++)cin>>a[i];
   cout<<"Element to search:";
   cin>>f;
   int p=binsearch(a,0,s,f);
   if(p==-1)cout<<"Not found\n";
   else
   cout<<"Found At "<<p<<" position.";
   cin>>s;
   return 0; 
}
