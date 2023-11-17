#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int positive = 1;
    int negative = 2;
    for (int i = 0; i < n; i++)
    {
        if(0<a[i])
        {
            a[i] = positive;
        } else if (0>a[i])
        {
            a[i] = negative;
        }
        printf("%d ", a[i]);
        
    }
    
    
    
    return 0;
}