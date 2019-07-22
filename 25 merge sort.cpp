#include<iostream>
using namespace std;
void merge(int *a,int le,int m,int rg)
{
	int s1=m,s2=rg-m-1;
	int l[s1],r[s2],res[rg];
	for(int i=0;i<m;i++)l[i]=a[i];
	for(int j=0;j<s2;j++)r[j]=a[m+1+j];
	int i=0,j=0,k=0;
	while(i<s1 and j<s2)
	{
		if(l[i]<r[j])
		{
			res[k]=l[i];
			k++;
			i++;
		}
		else
		{
			res[k]=r[j];
			j++;
			k++;
		}
	}
	while(i<s1)
	{
		res[k]=l[i];
		k++;i++;
	}
	while(j<s2)
	{
		res[k]=r[j];
		j++;
		k++;
	}
	for(int i=0;i<rg;i++)
	{
		a[i]=res[i];
	}
}
void msort(int*a,int l,int r)
{
	if(l<r)
	{
		int m=(l-r)/2;
		msort(a,l,m);
		msort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	msort(a,0,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
