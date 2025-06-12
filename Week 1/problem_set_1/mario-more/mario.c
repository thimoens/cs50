/*
Created by Thijs Moens on 09/06/2025.

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
// #include <cs50.h>

/*
do
{
    // Ask user for number for how tall the piramids should be
    int heightPiramids = get_int("How high should the pyramids be? Give me a number between 1 and 8: ");
}
while(heightPiramids <= 1 || heightPiramids => 8); */




// Main function
int main()
{

//    int heightPiramids = get_int("How high should the pyramids be? Give me a number between 1 and 8: ");


    // Print spaces
//    int spaces = heightPiramids - 1;

    // Print left hashes
    // for (int i = 1; i <= heightPiramids; i++)
    // Print gap
    // int gap = " " + " ";
    // Print right hashes

    // VOORBEELD 3
    // spaces, spaces, leftHash, gap, rightHash,
    // spaces, leftHash, leftHash, gap, rightHash, rightHash
    // leftHash, leftHash, leftHash, gap, rightHash, rightHash, rightHash



    // Create variables for spaces, hashes and gap
    char spaces = ' ';
    char leftHash = '#';
    char rightHash = '#';
    char gap = ' ';

    // Create a variable for the height of the pyramids
    int heightPiramids;
    
    // Ask user for number for how tall the piramids should be
    printf("How high should the pyramids be? Give me a number between 1 and 8: ");

    // Get and save the number the user types
    scanf("%d", &heightPiramids);

    // Just for debug reasons
    printf("You typed: %d\n", heightPiramids);


    // Check if the number is valid
    if (heightPiramids > 0 && heightPiramids < 9)
    {
        // Build the pyramid
        for (int i = 1; i <= heightPiramids; i++)
        {
            printf("%c %c %c %c %c\n", spaces, leftHash, gap, gap, rightHash);
        }
    }
    else
    {
        // Ask the question again
        printf("Not a correct number\n");
    }

    return 0;
}
