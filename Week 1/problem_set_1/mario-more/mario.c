/*
Created by Thijs Moens on 13/06/2025.

   Problem set:
   In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

        #  #
      ##  ##
     ###  ###
    ####  ####
    And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.

*/

// Include libaries
#include <stdio.h>
#include <cs50.h>



// Main function
int main()
{

    // Declare variable for user input
    int heightPiramids;

    // Check if the number is valid
    // Loop until the user gives a number between 1 and 8
    do
    {
        // Ask user for number for how tall the piramids should be
        heightPiramids = get_int("How high should the pyramids be? Give me a number between 1 and 8: ");
    }
    while(heightPiramids <= 0 || heightPiramids > 9);

    // Create variables for spaces, hashes and gap
    char spaces = ' ';
    char leftHash = '#';
    char rightHash = '#';
    // string gap = spaces + spaces;

    // Check if the number is valid
    if (heightPiramids > 0 && heightPiramids < 9)
    {
        // Build the pyramid
        for (int i = 1; i <= heightPiramids; i++)
        {

            // Remove the spaces
            for (int j = heightPiramids - i; j > 0; j--)
            {
                printf("%c", spaces);
            }

            // Add the left hashes
            for (int k = 0; k < i; k++)
            {
                printf("%c", leftHash);
            }

            // Print the gap
            printf("%c%c", spaces, spaces);

            // Add the right hashes
            for (int l = 0; l < i; l++)
            {
                printf("%c", rightHash);
            }

            // Print the line break
            printf("\n");
        }
    }
  
    return 0;
}