#include<stdio.h>

int sum(int x, int y);
/*
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
*/
int main()
{
    int f = sum(1200, 1500);
    printf("%d", f);
    return 0;
}
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}