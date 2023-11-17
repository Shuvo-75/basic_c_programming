#include<stdio.h>
int max_min()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max<ar[i])
        {
            max = ar[i];
        }
        
    }
    int min = max;
    for (int i = 0; i < n; i++)
    {
        if (min>ar[i])
        {
            min = ar[i];
        }
        
    }

    printf("%d %d", min, max);
    
    
}
int main()
{
    max_min();
    return 0;
}