#include<stdio.h>
int main()
{
int a[10],n,i,j,temp,k,flag=0;
printf("enter the no of elements");
scanf("%d",&n);
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
for(i=1;i<n;i++)
	{
			if(a[j]>a[j+1])
			 {
				printf("Element found at %d",i+1);
				break;
			 }
		else
		printf("no is not found");
	}
printf("started array is:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

