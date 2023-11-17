#include<stdio.h>
#include<string.h>
int main()
{
    int n; 
    scanf("%d", &n);
    char a[n][1001];
    int ln;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ln = strlen(a[i]);
        if (ln <= 10)
        {
            printf("%s\n", a[i]);
        }else
        {
            printf("%c%d%c\n", a[i][0], ln-2,a[i][ln-1]);
        }
    }


    return 0;
}