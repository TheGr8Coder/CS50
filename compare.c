#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is the value of X?\n");
    int y = get_int("What is the value of Y?\n");
    if (x < y)
    {
        printf("X is less than Y.\n");
    }
    else if (x > y)
    {
        printf("X is more than Y.\n");
    }
    else if (x == y)
    {
        printf("X is equal to Y.\n");
    }
    else
    {
        printf("Values Invalid!\n");
    }
}
