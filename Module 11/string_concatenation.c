#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[200];
    scanf("%s %s", a, b);
    int k = strlen(a);
    for (int i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s %s");
    

    return 0;
}

// from video 