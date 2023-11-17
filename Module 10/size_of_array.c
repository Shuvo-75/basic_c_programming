#include<stdio.h>
int main()
{
    int a[5];
    int sz=sizeof(a)/sizeof(char);
    printf("%d", sz);

    return 0;
}