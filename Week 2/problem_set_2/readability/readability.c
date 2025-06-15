/*
	Created by Thijs Moens on 14 june 2025
*/

// Import libraries
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Function decleration
// int computeColemanLiauIndex(string text);
int countLetters(string text);
int countWords(string text);
int countSentences(string text);


int main()
{
	// Ask the user for a text
	string text = get_string("Text: ");

	// Count the number of letters, words, and sentences in the text
	int letters = countLetters(text);
	int words = countWords(text);
	int sentences = countSentences(text);

	// TESTEN
	printf("i\n", letters);

	// Implement Coleman-Liau index
	// colemanLiauIndex(text);

	// Check grade by Coleman-Liau index

	// Print grade to user


	return 0;
}

// Function to implement Coleman-Liau index
// int computeColemanLiauIndex(string text)
// {
// 	// FORMULA index = 0.0588 * L - 0.296 * S - 15.8

// 	// L is the average number of letters per 100 words in the text

// 	// S is the average number of sentences per 100 words in the text
// }

int countLetters(string text)
{
    int count = 0;

    for (int i = 0, length = strlen(text); i < length; i++)
    {
    	if (isalpha(text[i]))
    	{
    		count += 1;
    	}
    }

    return count;

}

int countWords(string text)
{
    int count = 0;


    return count;
}

int countSentences(string text)
{
    int count = 0;


    return count;
}