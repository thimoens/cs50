/*
	Created by Thijs Moens on 13 june 2025
*/

#include <stdio.h>

int main(void)
{
	int scores[3];

	scores[0] = 75;
	scores[1] = 68;
	scores[2] = 45;

	// Print average score
	printf("Average: %f\n", (scores[0] + scores[1] + scores[2] / 3.0));
}