#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    printf("%d", strlen(ar));
}
int main()
{
    char ar[20];
    scanf("%s", ar);
    fun(ar);
    return 0;
}