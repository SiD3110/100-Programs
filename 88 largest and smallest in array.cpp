 #include<stdio.h>
 int main()
{
   int num;
   scanf("%d",&num);
   int a[num];
   for(int i=0;i<num;i++)
   {
   	scanf("%d",&a[i]);
	}
	int mx=a[0],min=a[0];
	for(int i=1;i<num;i++)
	{
		if(a[i]>mx)mx=a[i];
		if(min>a[i])min=a[i];
	 }
	 printf("Largest is:%d\n",mx);
	 printf("Smallest:%d",min); 
  return 0;
} 
