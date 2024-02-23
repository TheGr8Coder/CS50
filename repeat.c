#include <stdio.h>
#include <cs50.h> // Not Required

void repeat(int n);

int main(void)
{
    repeat(5);
}

void repeat(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("This is a Repeated Message!\n");
    }
}
