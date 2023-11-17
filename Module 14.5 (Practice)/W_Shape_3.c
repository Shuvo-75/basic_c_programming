#include<stdio.h>
int w_shape()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    int s1 = 0;
    int k1 = (2*n) - 1;
    for (int i = 0; i < (2*n); i++)
    {
        if (i<n)
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            s--;
            k += 2;
            printf("\n");
        } else
        {
            for (int j = 1; j <= s1; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k1; j++)
            {
                printf("*");
            }
            s1++;
            k1 -= 2;
            printf("\n");
        }
        
    }
}
int main()
{
    w_shape();
    return 0;
}


/*
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k1; j++)
        {
            printf("*");
        }
        s1++;
        k1 -= 2;
        printf("\n");
        
    }
    */