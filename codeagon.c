#include<stdio.h>
int main(){
    long xTreasure; 
    long yTreasure; 
    scanf("%ld %ld",&xTreasure,&yTreasure);
    int n; 
    scanf("%d",&n);
    long direction[n][2];
    for(int direction_i = 0; direction_i < n; direction_i++){
       for(int direction_j = 0; direction_j < 2; direction_j++){
          
          scanf("%ld",&direction[direction_i][direction_j]);
       }
    }
    
    return 0;
}
