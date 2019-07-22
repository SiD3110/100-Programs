#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int m;
	cout<<"Enter Total Marks(500):";
	cin>>m;
	int g=m/5;
	if(g>=60)cout<<"FIRST CLASS\n";
	else if(g>=50 and g<60)cout<<"SECOND CLASS\n";
	else if(g>=40 and g<50)cout<<"THIRD CLASS\n";
	else if(g<40)cout<<"FAILED\n";
	return 0;
}
