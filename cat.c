#include <stdio.h>

// Function prototype
void meow(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow(); // Call the cat function
    } 

}

// Create a cat function
void meow(void)
{
    printf("Meow!\n");
}