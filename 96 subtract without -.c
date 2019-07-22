#include<stdio.h>
int main()
{  int a,b;
  scanf("%d%d",&a,&b);
  for(int d=0;d<b;d++)
  {
  	a--;
  }
  printf("Difference is:%d",a);
	return 0;
}
