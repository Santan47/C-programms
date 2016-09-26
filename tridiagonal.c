#include<stdio.h>
int main()
{
int a[5][5],i,j;
printf("enter the elements of the matrix\n");
for(i=1;i<=5;i++)
{	
	for(j=1;j<=5;j++)
	{
		if(i==j||i==j+1||j==i+1)
		{
			scanf("%d",&a[i][j]);
		}
		else
		{
		a[i][j]=0;
		}
	}
}
printf("tridigonal matrix is\n");
for(i=1;i<=5;i++)
{
	for(j=1;j<=5;j++)
	{
		printf("%d\t",a[i][j]);
	}
printf("\n");
}
return 0;
}
