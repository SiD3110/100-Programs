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
    cout<<"Element:";
    cin>>e;
	for(int i=n+1;i>=pos;i--)
	{
	    a[i]=a[i-1];	
	}
	a[pos-1]=e;
	for(int i=0;i<n+1;i++)cout<<a[i]<<" ";
  return 0;
} 
