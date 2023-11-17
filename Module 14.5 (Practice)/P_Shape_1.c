#include<stdio.h>
int p_shape()
{
    int n;
    scanf("%d", &n);
    int s = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s ; j++)
        {
            printf("*");
        }
        s--;
        printf("\n");
    }
    
}
int main()
{
    p_shape();
    return 0;
}