/*
	Created by Thijs Moens on 14 june 2025
*/

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Function decleration
int calculateTotalScore(string word);

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int main ()
{

	// Prompt Player 1 for picking a word
	string playerOneWord = get_string("Player 1: ");

	// Prompt Player 2 for picking a word
	string playerTwoWord = get_string("Player 2: ");

	// Calculate points for player 1 and 2
	int scorePlayerOne = calculateTotalScore(playerOneWord);
	int scorePlayerTwo = calculateTotalScore(playerTwoWord);

	// Check who has won and print the result
	if (scorePlayerOne < scorePlayerTwo)
	{
		printf("Player 2 wins!\n");
	}
	else if (scorePlayerOne > scorePlayerTwo)
	{
		printf("Player 1 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}


	return 0;

}

int calculateTotalScore(string word)
{
	// Keep track of score
	int score = 0;

 	// Compute score for each character
    for (int i = 0, length = strlen(word); i < length; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }


	return score;
}
