#include<iostream>
using namespace std;
int main()
{
   int  yr;
   cin>>yr;
   if(yr%4==0 or yr%400 ==0)cout<<yr<<" is Leap year" ;
   else
   cout<<yr<<" is not a leap year";
   cin>>yr;
   return 0; 
}
