#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    char b[1001];
    int len = strlen(a);
    for (int i = len - 1, j = 0; i <= 0, j < len; i--, j++)
    {
        b[j] = a[i];
    }

    b[len] = '\0';
    int new_len = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]!=b[i])
        {
            new_len = 0;
            break;
        }
        else
        {
            new_len++;
        }
        
    }
    if (new_len==0)
    {
        printf("NO");
    } 
    else
    {
        printf("YES");
    }
    
    
}