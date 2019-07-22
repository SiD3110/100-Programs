#include<stdio.h>
void swap(int a,int b)
{
	int tmp=a;
	a=b;
	b=tmp;
	printf("\nAfter swaping : %d %d",a,b);
}
int main()
{  int a,b;
   printf("Enter Numbers:");
   scanf("%d%d",&a,&b);
   printf("Before Swapping:%d %d",a,b);
   swap(a,b);
   return 0;	
}
