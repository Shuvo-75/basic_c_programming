#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
        
    }
    int l = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            printf("%d ", j);
        }
        l++;
        printf("\n");
    }
    
    return 0;
}