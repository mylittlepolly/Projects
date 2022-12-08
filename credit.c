#include <cs50.h>
#include <stdio.h>

long get_card(void);
long calculate_checksum(long card);

int main(void)
{
    //Prompt user for a credit card
    long card = get_card();

    //Calculate checksum
    long checksum = calculate_checksum(card);
    //Check card for length and starting digits
    //Print AMEX, MASTERCARD, VISA, or INVALID
}

long get_card(void)
{
    long card;
    do
    {
        card = get_long("Card number:\n");
    }
    while (card < 0);
    return card;
}

long calculate_checksum(long card)
{
    long odd, even, checksum, total;
    int pos = 0;
    //Meanwhile there is a card
    do
    {
        //Check if it is every other digit and multiply it
        if (pos % 2 !=0)
        {
            odd = 2 * (card % 10);

            //Separate the number and divide it
            if (odd > 9)
            {
                checksum += odd % 10 + odd / 10;
            }
            else
            {
                checksum += odd;
            }
        }
        //If it is not every other digit just take it in mind to sum it at the end
        else
        {
            even = card % 10;
        }
        //Update to card new value and move to new position
        card = card / 10;
        pos++;

    }
    while (card != 0);
    checksum += even;
}
return checksum;

printf("Total: %li\n", total);
