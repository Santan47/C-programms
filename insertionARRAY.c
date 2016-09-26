#include<stdio.h>
int main()
{
int n,a[10],loc,item,i;
printf("enter the no of element\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the location\n");
scanf("%d",&loc);
printf("enter the item");
scanf("%d",&item);
if(loc<n)
{
for(i=n-1;i>loc-1;i--)
{
a[i+1]=a[i];
}
a[loc]=item;
}
else
printf("not possible");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
