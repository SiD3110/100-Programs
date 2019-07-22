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
    int mx=a[0],smx;
    for(int i=1;i<n;i++)
    {
	  if(a[i]>mx)
	  {
	    smx=mx;
	    mx=a[i];
	  }
    }
    cout<<"Second Largrst:"<<smx;
  return 0;
} 
