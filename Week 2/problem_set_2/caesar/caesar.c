/*
	Created by Thijs Moens on 15 june 2025


	Unencrypted text is generally called plaintext. 
	Encrypted text is generally called ciphertext. 
	And the secret used is called a key.
*/

// Import libraries
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

	// Check for 1 command line input
	if (argc == 0 || argc > 1)
	{
		printf("Usage: ./caesar key\n");

		return 1;
	}
	else 
	{
		return 0;
	}
	

    // Check if character in argv[1] is a digit
	



    // // Make sure every character in argv[1] is a digit
	// for (int i = 0; i < strlen(argv[1]); i++)
	// {
	// 	printf("%s\n", argv[1]);
	// 	// if (isdigit(argv[i]))
	// 	// {
	// 	// 	printf("Your input is a digit.\n");
	// 	// }
	// 	// else
	// 	// {
	// 	// 	printf("Your input is not a digit.\n");
	// 	// }
	// }

    // Convert argv[1] from a `string` to an `int`

    // Prompt user for plaintext

    // For each character in the plaintext:

        // Rotate the character if it's a letter

}