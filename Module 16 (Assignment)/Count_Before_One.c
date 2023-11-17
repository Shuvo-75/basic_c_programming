#include<stdio.h>
int count_before_one()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==1)
        {
            break;
        } else
        {
            count++;
        }
        
    }
    
    return count;
    
    
}
int main()
{
    printf("%d", count_before_one());
    return 0;
}