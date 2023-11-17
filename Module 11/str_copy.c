#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n], b[n];
    scanf("%s %s", a, b);
    int ln_a = strlen(a);
    int ln_b = strlen(b);
    for(int i=0; i <= ln_b; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}

// solve using logic