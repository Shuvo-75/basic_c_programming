#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    char t[1001];
    scanf("%s", t);

    int sl = strlen(s);
    int sl2 = strlen(t);

    printf("%d %d\n%s %s", sl, sl2, s, t);

    return 0;
}