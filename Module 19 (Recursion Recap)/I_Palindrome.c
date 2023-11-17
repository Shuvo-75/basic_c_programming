#include<stdio.h>
#include<string.h>
int main()
{
    char st[1001];
    scanf("%s", st);
    char st_r[1001];
    int len = strlen(st);
    for (int i = len - 1, j = 0; i >= 0, j <= len-1; i--, j++)
    {
        st_r[j] = st[i];
    }
    st_r[len] = '\0';
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        if (st_r[i]!=st[i])
        {
            check = 0;
            break;
        }
        else
        {
            check++;
        }
        
    }
    if (check!=len)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    return 0;
}