/*
	Created by Thijs Moens on 14 june 2025
*/

#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int computeColemanLiauIndex(string text);


int main()
{
	// Ask the user for a text
	string text = get_string("Text: ");

	// Implement Coleman-Liau index
	colemanLiauIndex(text);

	// Check grade by Coleman-Liau index

	// Print grade to user


	return 0;
}

// Function to implement Coleman-Liau index
int computeColemanLiauIndex(string text)
{
	// FORMULA index = 0.0588 * L - 0.296 * S - 15.8

	// L is the average number of letters per 100 words in the text

	// S is the average number of sentences per 100 words in the text
}