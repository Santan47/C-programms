#include<stdio.h>
struct student
{
char name[25];
char class[10];
int sub1,sub2,sub3,sub4,sub5,sub6,sum,roll;
float percentage;
sum=sub1+sub2+sub3+sub4+sub5+sub6;
percentage=sum/6.0;

}st;
int main()
{
int sum,sub1,sub2,sub3,sub4,sub5,sub6,roll;
float percentage;
char name[25],class[10];
{
printf("enter the marks in six subjects\n");
scanf("%d%d%d%d%d%d\n",&st.sub1,&st.sub2,&st.sub3,&st.sub4,&st.sub5,&st.sub6);
printf("enter your class \n");
scanf("%s",&st.class[10]);
printf("enter the roll no:\n");
scanf("%d",&st.roll);
printf("enter your name\n");
scanf("%s",&st.name[25]);
printf("sum of the subjects is= %d\n",st.sum);
printf("percentage of the student is= %f\n",st.percentage);
}
return 0;
}


