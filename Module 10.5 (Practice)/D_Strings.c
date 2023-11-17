#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    char b[1001];
    scanf("%s", b);
    int ln = strlen(a);
    int ln1 = strlen(b);
    printf("%d %d\n", ln, ln1);
    printf("%s%s\n", a, b);
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    return 0;
}