#include<iostream>
using namespace std;

int main()
{
    int sum=1;
    int n;
	  cin>>n;
    while(n>1)
	  {
        sum=sum*n;
        n--;
    }
    cout<<sum<<endl;
}
