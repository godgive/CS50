// Dieudonne Sogbossi
// greedy.c
// Harvard CS50
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;      // declare float variable
    do
    {
        printf("How much change is owed? ");    // prompt user to enter change owed
        x = GetFloat();                         // read change value into variable x
    } while (x <= 0);                           // use do while loop whith condition to keep asking if x less or equal 0
    
    int  change = round(x * 100); // convert entered change to cent
    int coins = 0;                // declare and initialize coins count to 0
    int remain;                   // declare integer type remain for change remains after compilations
    int Q = change / 25;          // quarters
    remain = change%25;           // remain after quarters
    
    int D = remain / 10;          // dimes
    remain %= 10;                 // remain after quarters and dimes
    
    int N = remain / 5;           // nickels
    
    int P = remain % 5;          // pennies - since a penny is 1, just use remain after quarters,dimes, and nickels
    
    coins += Q + D + N + P;     // add quarters, dimes, nickels, and pennies values into coins
    
    printf("%d\n", coins);      // print amount of coins
    
    return 0;
}
