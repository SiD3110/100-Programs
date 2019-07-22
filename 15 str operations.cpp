#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,inp;
	cin>>str;
	cout<<"1. Add into substring.\n";
	cout<<"2. Delete elements\n";
	cout<<"3. Replace characters\n";
	int n;
	cin>>n;
	switch(n)
	{
		case 1:cout<<"Enter Position of concatination:";
		       int pos;
		       cin>>pos;
		       cout<<"\nString :";
		       cin>>inp;
		       str.append(inp,pos-1);
		       break;
		case 2:cout<<"Enter number of delete character:";
		       int c;
		       cin>>c;
		       cout<<"\n from position:";
		       int p;
			   cin>>p;
			   str.erase(p,c);
			   break;
		case 3:cout<<"Enter String to be replaced:";
		       string s;
		       cin>>s;
		       cout<<"\n Number of Character to replace:";
		       int in,ps;
		       cin>>in;
		       cout<<"\nPosition:";
		       cin>>ps;
		       str.replace(ps-1,in,s);
		       break;
	}
	cout<<"Result:"<<str;
	return 0;
}
