// Dieudonne Sogbossi
// mario.c
// Harvard CS50
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;        // declare integer type height
    do                // use loop to read height
    {
        printf("Please enter half-pyramid’s height: ");  // prompt user to enter height
        height = GetInt();                              // read height value
    } while(height < 0 || height > 23);                // do loop condition
    
    
    for (int i = 0; i < height; i++)    // use for loop to print spaces and dashes 
    {
        int count = height - i - 1;    // declare and set count variable for space printing
        while((count) > 0)             // print spaces with while loop
        {
            printf(" ");              // print space
            count--;                 // substract 1 from count value
        }
        for(int j = 0; j <= i + 1; j++)    // use for loop to print dashes
        {
            printf("#");                  // print dashes 
        }
        printf("\n");                    // print end of line after printing dashes
    }
    return 0;
}