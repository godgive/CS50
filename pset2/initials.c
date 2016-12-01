// Harvard CS50
// initials.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    // printf("Please enter your name: ");         // Prompt user to enter name
    string N = GetString();                     // Get user's name and store to string variable N
    
    printf("%c", toupper(N[0]));               // print first Initial
    
    for(int i = 1,n = strlen(N); i < n; i++)    // use for loop to check rest of string stored
    {
        
        if(N[i] == ' ')                    // use if to determine if specific character is space
            {
                printf("%c", toupper(N[i + 1]));   // if condition met for space, print next initial with uppercase
            }
            
    }
    
    printf("\n");  // go to the next line when done printing
    
}
