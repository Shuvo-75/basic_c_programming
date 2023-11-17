#include<stdio.h>
int t_shape()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    for (int i = 0; i < n; i++)
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
    }
    
}
int main()
{
    t_shape();
    return 0;
}