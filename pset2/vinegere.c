// Harvard CS50
// vinegere.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc !=2) 
    {
        printf("Invalid entry, try again\n");   // print error for more than 2 entries
        return 1;
    }
    
    else    // continue if tou have 2 entries
    {
        string k = argv[1];     // access entry with string k
        int a = 0;
        do
        {
            if(isalpha(k[a])) a++;
            else 
            {
                printf("Only alphabetical entries are allowed, please try again.\n");
                return 1;
            }
        }while(a < strlen(k));
        
        
        string P = GetString();         // read plaintext
        
        //string k = argv[1];     // store string type entry to k for easier processing
        int i = 0;
            
        for(int j = 0, n = strlen(P); j < n; j++)   // use for loop to encript and print Cipertext
        {
            int l = (tolower(k[i]) - 97) % 26;  // convert key to lower and alphabetical
            if(isalpha(P[j]))
            {
                
                int Ci;           // declare an integer type variable
                    
                if (isupper(P[j]))      // condition to apply on Upper Case Characters stored in the array
                {
                    // Reduce integer value of character at P[i] by 65 or 'A' according to ASCII table / convert ASCII to Alphabetical
                    Ci = (P[j] + l - 65) % 26;
                    
                    printf("%c", (Ci + 65));   // print Ciphertext while converting back to ASCII values
                        
                }
                else if (islower(P[j]))
                {
                    Ci = (P[j] + l - 97) % 26;   // convert ASCII to Alphabetical by reducing by 97 or 'a' for lower case characters
                        
                    printf("%c", (Ci + 97));    // print Ciphertext while converting back to ASCII values
                    
                }
                if(i == (strlen(k) - 1))            // check if you need to restart key position
                {
                    i = 0;                  // reset key position
                }
                else 
                {
                    i++;                    // increment i by 1
                }
                  
            }
            else 
            {
                printf("%c", P[j]);       // print anything else that is not alphabetic
            }
        }
        printf("\n");
    }
    return 0;
}
