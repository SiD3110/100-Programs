#include<iostream>
 using namespace std;
 int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int pos,e;
    cout<<"enter Position :";
    cin>>pos;
	for(int i=pos-1;i<n-1;i++)
	{
	    a[i]=a[i+1];	
	}
	n=n-1;
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
  return 0;
} 
