#include<iostream>
using namespace std;
int main()
{
   int s,f;
   cin>>s;
   int a[s];
   for(int i=0;i<s;i++)cin>>a[i];
   cout<<"Element to search:";
   cin>>f;
   int l=0,r=s;
   while(l<r)
   {
   	int m=(l+r)/2;
   	if(a[m]==f)
	{
	  cout<<"Foud At "<<m+1<<" Position.";
	  break;
    }
   	else if(a[m]<f)l=m+1;
	else if(a[m]>f)r=m;	
   }
   if(l==r)cout<<"Not found\n";
   cin>>s;
   return 0; 
}
