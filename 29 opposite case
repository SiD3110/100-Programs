#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A' and str[i]<='Z')
		{   int p=str[i]-'A';
			str[i]=char('a'+p);
		}
		else
		{
			int p=str[i]-'a';
			str[i]=char('A'+p);
		}
	}
	cout<<str;
	return 0;
}
