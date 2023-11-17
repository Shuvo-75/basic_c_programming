#include<stdio.h>
char capital_to_small()
{
    char x;
    scanf("%c", &x);
    char small = x + 32;
    return small;
}
int main()
{
    printf("%c", capital_to_small());
    return 0;
}