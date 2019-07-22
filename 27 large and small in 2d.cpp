#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int j=0;j<n;j++)
	{
	  for(int i=0;i<n;i++)
	   {
		cin>>a[j][i];
	   }
    }
	int mx=a[0][0],min=a[0][0];
	for(int j=0;j<n;j++)
	{
	  for(int i=1;i<n;i++)
	  {
	   if(a[j][i]>mx)
	   {
	   	mx=a[j][i];
	   }
	   if(a[j][i]<min)
	   {
	   	min=a[j][i];
	   }
      }
    }
    cout<<"Largest:"<<mx<<" \nSmallest:"<<min;
	return 0;
}
