#include<stdio.h>
int main()
{
    int n, s, k, p, q;
    scanf("%d", &n);
    s = 0;
    k = (2*n)-1;
    for (int i = 1; i <= n; i++)
    {
        
        for(int j=1; j<=s; j++)
        {
            printf(" ");
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("*");
            printf(" ");
        }
        s++;
        k = k-2;
        printf("\n");
        
    }
    p = n -1;
    q = 1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j = 1; j<=p; j++)
        {
            printf(" ");
            printf(" ");
        }
        for(int j = 1; j <= q; j++)
        {
            printf("*");
            printf(" ");
        }
        // line ending 
        p--;
        q = q + 2;
        
        if (i==n)
        {
            break;
        } else
        {
            printf("\n");
        }
        
    }
    
    return 0;
}