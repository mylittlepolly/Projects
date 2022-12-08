#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, space;
    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // For each row
    for (row = 0; row < height; row++)
    {
        //To align it to the right
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        // For each column
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n");
    }
}
