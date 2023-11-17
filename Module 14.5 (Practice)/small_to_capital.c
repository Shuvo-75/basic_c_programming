#include<stdio.h>
char small_to_capital()
{
    char x;
    scanf("%c", &x);
    char capital = x - 32;
    return capital;
}
int main()
{
    printf("%c", small_to_capital());
    return 0;
}