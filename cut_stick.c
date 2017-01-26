#include<stdio.h>
int main()
{
int a[1000],n,i,count=0,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(1)
{
min=a[0];
   for(i=0;i<n;i++)
                        {
                                if(a[i]!=0)
                                {
                                        count++;
                                }
                        }
if(count==0)
break;
printf("%d\n",count);
count=0;

        for(i=0;i<n;i++)
	{
            if (a[i]<min && a[i] != 0)
	{
                min=a[i];
            }
            if (min==0){
                min=a[i];
            }
        }
 
        for (i=0;i<n;i++){
            if (a[i]!=0)
                a[i] -= min;
        }
}
}
