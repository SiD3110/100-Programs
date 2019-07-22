#include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
 	int num;
 	cin>>num;
 	int sum=1,i=2;
 	while(i<sqrt(num))
 	{
 	   if(num%i==0)
		{
			sum+=i+(num/i);
		}
		i++;	
	}
	if(sum==num)cout<<"Perfect Number\n";
	else
	cout<<"It Is not a Perfect Number\n";
	return 0;
 }
