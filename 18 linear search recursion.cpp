#include<iostream>
using namespace std;
int lsearch(int *arr,int index,int n,int f)
{
	if(arr[index]==f)return index;
	else if(index==n-1)return -1;
	else
	{
		return lsearch(arr,index+1,n,f); 
	}
}
int main()
{
   int s,f;
   cin>>s;
   int a[s];
   for(int i=0;i<s;i++)cin>>a[i];
   cout<<"Element to search:";
   cin>>f;
   int p=lsearch(a,0,s,f);
   if(p==-1)cout<<"Not found\n";
   else
   cout<<"Found At "<<p+1<<" position.";
   //cin>>s;
   return 0; 
}
