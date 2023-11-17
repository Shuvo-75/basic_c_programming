#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    int v = strcmp(a,b);
    if (v<0)
    {
        printf("A is smaller than B\n");
    }else if (v>0)
    {
        printf("B is smaller than A\n");
    } else
    {
        printf("A & B both are equal\n");
    }
    
    return 0;
}
