#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char agree = get_char("Do you think I am smart? (y/n)\n");
    if (agree == 'y' || agree == 'Y')
    {
        printf("Thanks!\n");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Rude!\n");
    }
    else
    {
        printf("Enter a valid input- y = Yes , n = No\n");
    }
}
