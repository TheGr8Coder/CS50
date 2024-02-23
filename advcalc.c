#include <stdio.h>
#include <cs50.h>

float add(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);

int main(void)
{
    float num1 = get_float("What's The 1st Number?\n");
    char func = get_char("What's The Function? (Plus + ; Minus - ; Multiply * ; Divide / )\n");
    float num2 = get_float("What's The 2nd Number?\n");

    if(func == '+')
    {
        printf("The result is %f\n", add(num1, num2));
    }
    else if(func == '-')
    {
        printf("The result is %f\n", sub(num1, num2));
    }
    else if(func == '*')
    {
        printf("The result is %f\n", mul(num1, num2));
    }
    else if(func == '/')
    {
        printf("The result is %f\n", div(num1, num2));
    }
    else
    {
        printf("Invalid Operator!\n");
    }
}

float add(float x, float y)
return x + y;

float sub(float x, float y)
return x - y;

float mul(float x, float y)
return x * y;

float div(float x, float y)
return x / y;
