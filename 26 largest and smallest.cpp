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
	int mx=a[0],min=a[0];
	for(int i=1;i<n;i++)
	{
	   if(a[i]>mx)
	   {
	   	mx=a[i];
	   }
	   if(a[i]<min)
	   {
	   	min=a[i];
	   }
    }
    cout<<"Largest:"<<mx<<" \nSmallest:"<<min;
	return 0;
}
