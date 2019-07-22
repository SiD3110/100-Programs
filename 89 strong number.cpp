 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {  int fac[10]={1,1,2,6,24,120,720,5040,40320,362880};
 	int num;
 	cin>>num;
 	int sum=0;
 	while(num)
 	{
 		int d=num%10;
 		sum+=fac[d];
 		num/=10;
	}
	if(sum==num)cout<<"Strong Number\n";
	else
	cout<<"It Is not a Strong Number\n";
	return 0;
 } 
