#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 
#include <ctype.h> 

int main(int argc, string argv[])
{
   
    if (argv[1] == NULL || argc != 2)
    {
        printf("Usage: ./vigenere <key>\n");
        return 1;
    }
    else
    {
        int len = strlen(argv[1]);
        int k [len];
        
        // validate key only letters
        for (int i = 0; i < len; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Keyword must only contain letters A-Z and a-z\n");
                return 1;
            }
        }
        
        
        for (int i = 0; i < len; i++)
        {
            int m = 65;
            if (islower(argv[1][i]))
                m += 32;
            k[i] = ((char) argv[1][i]) - m;
        }        
        
        // get string
        string s;
        do 
        {
            s = GetString();
        } 
        while (s == NULL);
        
        // encrypt and print characters
        int j = 0;
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            int c = (char) s[i];
            
            if (isalpha(s[i]))
            {
                int m = 65;
                if(islower(s[i]))
                    m += 32;
                c = (((c - m) + k[j]) % 26) + m; 
                
               
                if (j == len-1)
                    j = 0;
                else
                    j++;
            }
            printf("%c",c); 
        }
        printf("\n");
        return 0;
    }
}
