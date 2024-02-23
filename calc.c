#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float num1 = get_float("What's The 1st Number?\n");
    char func = get_char("What's The Function? (Plus + ; Minus - ; Multiply * ; Divide / )\n");
    float num2 = get_float("What's The 2nd Number?\n");

    if(func == '+')
    {
        printf("The result is %f\n", num1 + num2);
    }
    else if(func == '-')
    {
        printf("The result is %f\n", num1 - num2);
    }
    else if(func == '*')
    {
        printf("The result is %f\n", num1 * num2);
    }
    else if(func == '/')
    {
        printf("The result is %f\n", num1 / num2);
    }
    else
    {
        printf("Invalid Operator!\n");
    }
}
