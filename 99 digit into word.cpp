#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	string res="";
	while(m)
	{
		int d=m%10;
		res=s[d]+res;
		m/=10;
	}
	cout<<"Digit to Words:"<<res;
	return 0;
}
