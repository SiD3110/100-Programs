#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int a,b,c;
	cout<<"coef.x2:";
	cin>>a;
	cout<<"\ncoef.x:";
	cin>>b;
	cout<<"\nconstant:";
	cin>>c;
	int r1=((-b)+sqrt(b*b-4*a*c))/2,r2=((-b)-sqrt(b*b-4*a*c))/2;
	cout<<"Roots Of Equation are: "<<r1<<" "<<r2;
	return 0;
}
