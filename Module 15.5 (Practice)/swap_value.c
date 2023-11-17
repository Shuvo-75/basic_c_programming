#include<stdio.h>
int swap_it(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int tem;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tem = a[i];
            a[i] = a[j];
            a[j] = tem;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
}
int main()
{
    int n = 2;
    swap_it(n);
    return 0;
}