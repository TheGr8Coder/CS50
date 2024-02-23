#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's Your Name?\n");
    printf("Hello, %s\n", answer);
}
