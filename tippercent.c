#include <stdio.h>
#include<math.h>
int main() {
   double mealCost;
int tipPercent,taxPercent;
int totalCost;
float tip,tax;
    
    scanf("%f\n%d\n%d",&mealCost,&tipPercent,&taxPercent);
    tip= mealCost*tipPercent/100;
    tax= mealCost*taxPercent/100;
    totalCost= mealCost + tip + tax;
    printf("The total meal cost is %d dollars.\n",totalCost);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

