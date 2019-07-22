#include<stdio.h>
void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
	
}
int main()
{  int a,b;
   printf("Enter Numbers:");
   scanf("%d%d",&a,&b);
   printf("Before Swapping:%d %d",a,b);
   swap(a,b);
   printf("\nAfter Swapping:%d %d",a,b);
   return 0;	
}
