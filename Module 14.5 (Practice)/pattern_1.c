#include<stdio.h>
int patter_1()
{
    int n;
    scanf("%d", &n);
    int s = n -1;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k++;
        printf("\n");
    }
    
}
int main()
{
    patter_1();
    return 0;
}