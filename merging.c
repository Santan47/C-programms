#include<stdio.h>
int main()
{
int a[5],b[5],c[10],i;
printf("enter the first array element\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("enter the second array element\n");
for(i=0;i<5;i++)
scanf("%d",&b[i]);
for(i=0;i<10;i++)
{
	if(i<5)
	{
	c[i]=a[i];
	}
	else
	{
	c[i]=b[i-5];
	}
}
printf("resultant array is\n");
for(i=0;i<10;i++)
{
printf("%d\n",c[i]);
}
return 0;
}
