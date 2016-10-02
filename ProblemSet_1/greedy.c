#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void){
    
    float change;
    int coin;
    coin = 0;
    do{
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
    }while(change < 0);
    
     
    
    while(change > 0.24){
       change=change - 0.25;
        coin++;
        
        
    }
    
     while(change > 0.09){
       change=change - 0.1;
        coin++;
        
        
    }
    
     while(change > 0.04){
       change=change - 0.05;
        coin++;
        
        
    }
     while(change > 0.005){
       change=change - 0.01;
        coin++;
        
        
    }
    
   
    printf("%i\n" , coin);
    
    
    
}
