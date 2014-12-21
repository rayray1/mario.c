/**
* mario.c
*
* cs50 problem set 1
*
* Raymond Rupiah
*
* mario half-pyramid program
*/




#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare and intialize variables
    int height = 0;

    // get user input
    do {
        printf("Enter the Pyramid's height\n:");
        height = GetInt();
        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);

    for(int i = 0; i < height; i++)
    {
        // print spaces
        for(int j = 0; j < height-i-1; j++)
        {
            printf("%s", " ");
        }
        // print the '#' character
        for(int k = 0; k < i+2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
