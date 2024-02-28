#include <cs50.h>
#include <stdio.h>

int cash(void);
int cq(int c);
int cd(int c);
int cn(int c);
int cp(int c);

int main(void)
{
    int c = cash();

    int q = cq(c);
    c = c - q * 25;

    int d = cd(c);
    c = c - d * 10;

    int n = cn(c);
    c = c - n * 5;

    int p = cp(c);
    c = c - p * 1;

    int coins = q + d + n + p;

    printf("The No. of Coins in change are %i. Also, the composition is- %i Quarter(s), %i Nickel(s), %i Dime(s), and %i Pennies.\n", coins, q, d, n, p);
}

int cash(void)
{
    int nc;
    do
    {
        nc = get_int("Change owed: ");
    }
    while (nc < 0);
    return nc;
}

int cq(int c)
{
    int q = c / 25;
    return q;
}

int cd(int c)
{
    int d = c / 10;
    return d;
}

int cn(int c)
{
    int n = c / 5;
    return n;
}

int cp(int c)
{
    return c;
}
