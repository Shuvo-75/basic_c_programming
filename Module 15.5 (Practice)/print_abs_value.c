#include<stdio.h>
#include<stdlib.h>
int my_abs(int n)
{
    printf("%d", abs(n));
}
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}