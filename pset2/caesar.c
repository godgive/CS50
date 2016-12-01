// Harvard CS50
// caesar.c

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
        int k = atoi(argv[1]);     // convert string type entry to integer type
        
        if(k < 1)                   // use if to print invalid negative key value
        {
            printf("Your key cannot be a negative integer, must be positive.\n");
            return 1;
        }
        else                // proceed if key is a positive value
        {
            //printf("Plaintext: ");        // prompt user to enter plaintext
            string P = GetString();         // read plaintext
            
            for(int i = 0, n = strlen(P); i < n; i++)   // use for loop to encript and print Cipertext
            {
                 int Ci;           // declare an integer type variable
                
                if (isupper(P[i]))      // condition to apply on Upper Case Characters stored in the array
                {
                    // Reduce integer value of character at P[i] by 65 according to ASCII table / convert ASCII to Alphabetical
                    Ci = (P[i] + k - 65) % 26;
                    
                    printf("%c", (Ci + 65));   // print Ciphertext while converting back to ASCII values
                }
                else if (islower(P[i]))
                {
                    Ci = (P[i] + k - 97) % 26;   // convert ASCII to Alphabetical by reducing by 97 for lower case characters
                    
                    printf("%c", (Ci + 97));    // print Ciphertext while converting back to ASCII values
                }
                
                else printf("%c", P[i]);       // print anything else that is not alphabetic
            }
            
        }
    }

    printf("\n");           // Of course print a new line
    return 0;
    
}
