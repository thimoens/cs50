#include <stdio.h>
#include <cs50.h>

int main()
{
    // Ask the user for a name
    string answer = get_string("What is your name? ");

    // Print the answer to the screen
    printf("hello, %s\n", answer);

    return 0;
}