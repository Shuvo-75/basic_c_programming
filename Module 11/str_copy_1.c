#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n], b[n];
    scanf("%s %s", a, b);
    strcpy(a,b);
    printf("%s %s", a, b);
    return 0;
}

// use strcpy function 