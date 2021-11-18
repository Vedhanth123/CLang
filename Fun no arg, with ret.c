#include <stdio.h>

int sum()
{
    int a = 10;
    int b = 20;
    return a+b;
}

void main()
{
    int c;
    c = sum();
    printf("%d",c);
}