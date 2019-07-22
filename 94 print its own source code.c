#include<stdio.h>
int main()
{  int a,b;
  scanf("%d%d",&a,&b);
  FILE *p;
  p=fopen("c.cpp","r");
  while(!(feof(p)))
  {
  	char ch=fgetc(p);
  	printf("%c",ch);
  }
	return 0;
}
