#include<iostream>
using namespace std;
int main()
{
 int s;
 cin>>s;
 int a[s],i;
 for(int i=0;i<s;i++)cin>a[i];
 int f;
 cin>>f;
 for( i=0;i<s;i++)
 {
   if(a[i]==f)
   {
     cout<<"Found at "<<i+1<<"Position";
     exit(0);
   }
  }
  cout<<"Not Found";
  return 0;
  }
