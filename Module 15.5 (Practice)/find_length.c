#include<stdio.h>
#include<string.h>
int my_len(char ar[])
{
    int count = 0;
    for (int i = 0; ar[i]!='\0'; i++)
    {
        count++;
    }
    
    printf("%d", count);
    return 0;
}
int main()
{
    char ar[20];
    scanf("%s", ar);
    my_len(ar);
    return 0;
}