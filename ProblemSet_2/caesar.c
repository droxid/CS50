#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){
    if( argc != 2) // check arguments
    {
        printf("Input: caesar <key>\n");
        return 1;
    }else{
    
    string name = GetString();
    int key = atoi(argv[1]);
    

    for(int i = 0, n = strlen(name); i < n; i++){
        
        if (isalpha(name[i])){
            int ascii= 97;
            if(isupper(name[i])){
                ascii = 65;
            }
              
    int t = (((name[i]- ascii)+key)%26)+ ascii;
    printf("%c", t);
        }else{
            printf("%c", name[i]);
        }
   

}
printf("\n");

return 0;
}

}
