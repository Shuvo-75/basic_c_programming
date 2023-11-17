#include<stdio.h>
int char_to_ascii()
{
    char x;
    scanf("%c", &x);

    return x;
}
int main()
{
    int y = char_to_ascii();
    printf("%d", y);
    return 0;
}