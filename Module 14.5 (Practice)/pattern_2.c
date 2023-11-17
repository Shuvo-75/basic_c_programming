#include<stdio.h>
int pattern_2()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    int k = (2*n) - 1;
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
        s++;
        k -= 2;
        printf("\n"); 
    } 
}
int main()
{
    pattern_2();
    return 0;
}