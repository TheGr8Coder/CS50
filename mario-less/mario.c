#include <cs50.h>
#include <stdio.h>

int main(void)
{
a    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    for (int space = 1; space < height + 1; space++)
    {
        int hash = height - space;
        for (int dot = 0; dot < hash; dot++)
        {
            printf(" ");
        }
        for (int single_line = 0; single_line < space; single_line++)
        {
            printf("#");
        }

        printf("\n");
        pr 
    }
}
