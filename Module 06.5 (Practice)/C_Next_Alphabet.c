#include<stdio.h>
int main()
{
    char n;
    scanf(" %c", &n);
    int sz = n + 1;
    if (n<'z')
    {   
        printf("%c", sz);
    } else if (n=='z')
    {
        printf("a");
    }
    
    
    return 0;
}