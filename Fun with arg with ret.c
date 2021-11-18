#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void main()
{
    int a = 10;
    int b = 20;
    int c;
    c = sum(a,b);
    printf("%d", c);
    
}