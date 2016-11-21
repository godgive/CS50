// Dieudonne Sogbossi
// water.c
// Harvard CS50
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter the length of your shower in minutes: "); // prompt user to enter shower length
    int length = GetInt();     // read shower length in minutes
    
    printf("minutes: %i\n", length);   // print length
    printf("bottles: %i\n", length * 12);  // print length's equivalent in water bottles
    
    return 0;
}