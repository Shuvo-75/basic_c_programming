#include<stdio.h>
int main()
{
    int n, s, k;
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
    
    return 0;
}