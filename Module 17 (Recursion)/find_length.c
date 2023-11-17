#include<stdio.h>
int fun(char a[], int i)
{
    if(a[i]=='\0') return 0;
    int length = fun(a, i+1);
    return length + 1;
}
int main()
{
    char a[1000];
    scanf("%s", a);
    int x = fun(a, 0);
    printf("%d", x);
    return 0;
}