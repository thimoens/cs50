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
int computeColemanLiauIndex(int letters, int words, int sentences);
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

	// Implement Coleman-Liau index
	int indexNumber = computeColemanLiauIndex(letters, words, sentences);

	// Check grade by Coleman-Liau index
	if (indexNumber < 1)
	{
		printf("Before Grade 1\n");
	}
	else if (indexNumber >= 16)
	{
		printf("Grade 16+\n");
	}
	else
	{
		printf("Grade %i\n", indexNumber);
	}

	return 0;
}

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

    for (int i = 0, length = strlen(text); i < length; i++)
    {
    	if (isblank(text[i]))
    	{
    		count += 1;
    	}
    }

    // Count one extra for the last missing space as a word
    count += 1;

    return count;
}

int countSentences(string text)
{
    int count = 0;

    for (int i = 0, length = strlen(text); i < length; i++)
    {
    	if (ispunct(text[i]))
    	{
    		count += 1;
    	}
    }

    return count;
}


// Function to implement Coleman-Liau index
int computeColemanLiauIndex(int letters, int words, int sentences)
{
	/* Formula for the index is

		index = 0.0588 * L - 0.296 * S - 15.8

	*/

	// L is the average number of letters per 100 words in the text
	float L = ((float)letters / (float)words) * (float)100;

	// S is the average number of sentences per 100 words in the text
	float S = ((float)sentences / (float)words * (float)100);
	// printf("%f\n", S);

	// Calculate formula
	float index = (0.0588 * (float)L - 0.296 * (float)S - 15.8);

	// Round the number
	int roundIndex = (int) round(index);

	return roundIndex;

}