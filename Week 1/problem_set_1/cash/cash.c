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

// Function declaration
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);


// Main function
int main()
{
    // Declare variable for user input
    int cents;

    // Check if the number is valid (above 0)
    do
    {
        // Ask the user for change owed
        cents = get_int("Change owed: ");
    }
    while(cents < 0);


    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);

    // Subtract the value of those dimes from remaining cents
    cents = cents - (dimes * 10);
    
    // Calculate how many nickels you should give customer
    int nickels = calculate_nickles(cents);

    // Subtract the value of those nickels from remaining cents
    cents = cents - (nickels * 5);

    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);

    // Subtract the value of those pennies from remaining cents
    cents = cents - (pennies * 1);


    // Sum the number of quarters, dimes, nickels, and pennies used
    int sumOfAllCoins = quarters + dimes + nickels + pennies;

    // Print that sum
    printf("%d\n", sumOfAllCoins);

    return 0;
}


// Calculate how many quarters you should give customer
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

// Calculate how many dimes you should give customer
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

// Calculate how many nickles you should give customer
int calculate_nickles(int cents)
{
    int nickles = 0;
    while (cents >= 5)
    {
        nickles++;
        cents = cents - 5;
    }
    return nickles;
}

// Calculate how many pennies you should give customer
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}