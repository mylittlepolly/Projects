#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, space, second;
    //Prompt user for input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Build row
    for (row = 0; row < height; row++)
    {
        //Align to the left
        for (space = 0; space < height - column - 1; space++)
        {
            printf(" ");
        }
        //Build column
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        //Print gap
        printf("  ");
        //Print right hashes
        for (second = 0; second <= row; second++)
        {
            printf("#");
        }
        //Next row
        printf("\n");
    }
}
