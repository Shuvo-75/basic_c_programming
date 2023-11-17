#include<stdio.h>

int sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    return sum;
}
int main()
{
    int f = sum();
    printf("%d", f);
    return 0;
}