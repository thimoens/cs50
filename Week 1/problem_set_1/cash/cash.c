/*
Created by Thijs Moens on 13/06/2025.

   Problem set:
   Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:

    Change owed: 25
    1
    But prompt the user for an int greater than 0, so that the program works for any amount of change:

    Change owed: 70
    4
    Re-prompt the user, again and again as needed, if their input is not greater than or equal to 0 (or if their input isn’t an int at all!).



*/

// Include libaries
#include <stdio.h>
#include <cs50.h>

// Main function
int main()
{
    // Declare variable for user input
    int changeOwed;
    int numberOfCoins = 0;

    // Check if the number is valid (above 0)
    do
    {
        // Ask the user for change owed
        changeOwed = get_int("Change owed: ");
    }
    while(changeOwed <= 0);

    // Variables for coins
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    while(changeOwed % quarters != 0)
    {
        changeOwed -= quarters;
        numberOfCoins++;
        printf("%d\n", numberOfCoins);
    }

    // printf("%d", numberOfCoins);


    return 0;
}