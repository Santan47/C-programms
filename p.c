#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int meal_cost,total_cost,tip_percent,tax_persent;
    float tip,tax;
    printf("%d",meal_cost);
    printf("%d",tip_percent);
    printf("%d",tax_percent);
    tip=(meal_cost)*(tip_percent/100);
    tax=(meal_cost)*(tax_percent/100);
    scanf("%f",tip);
    scanf("%f",tax);
    total_cost=meal_cost+tip+tax;
    scanf("%d",total_cost);
    printf("the total meal cost is %d dollars");   
    return 0;
}

