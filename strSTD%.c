#include<stdio.h>
struct stud
{
    int rollno, s1, s2, s3, s4, s5,tot ;
    char name[10] ;
    float avg ;
} s[10] ;
int main()
{
    int i, n ;
    printf("Enter the number of student : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the roll no : ") ;
        scanf("%d", &s[i].rollno) ;
        printf("\nEnter the name : ") ;
        scanf("%s", s[i].name) ;
        printf("\nEnter the marks in 5 subjects : ") ;
        scanf("%d %d %d %d %d", &s[i].s1, &s[i].s2, &s[i].s3, &s[i].s4, &s[i].s5) ;
        s[i].tot = s[i].s1 + s[i].s2 + s[i].s3 + s[i].s4 + s[i].s5;
        s[i].avg = s[i].tot / 5.0 ;
    }
    printf("\nRoll No. Name \t\tSub1\t Sub2\t Sub3\t Sub4\t sub5\t Total\t Average\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf("%d \t %s \t\t %d \t %d \t %d \t %d \t %d \t %d \t %.5f \n",
        s[i].rollno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].s4,s[i].s5,s[i].tot,s[i].avg);
    }
    return 0;
}
