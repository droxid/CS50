#include "cs50.h"
#include "stdio.h"
 
 
int main(void)
{
    
    int height;
  do{  
    printf("Pleace, write the height of pyramid (1-23)\n");
    height = GetInt();
       
            
  }while(height < 0 || height >= 24);
     for(int i=1; i<=height; i++) {
       
            for(int j=0; j<height; j++){
                if(height-j-i>0){
                    printf(" ");
                }else{
                    printf("#");
                }
            }
            
        printf("  ");   
           for(int j=height; j!=0; j--){
                if(height-j-i<0){
                    printf("#");
                }
            }
         printf("\n");
            }
}
