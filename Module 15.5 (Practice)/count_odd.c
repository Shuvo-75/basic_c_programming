#include<stdio.h>
int count_odd(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            if (a[i]%2!=0 && a[i]!=0)
            {
                odd++;
            }
        }
        
        
    }
    printf("%d", odd);
    
    
}
int main()
{
    int n;
    scanf("%d", &n);
    count_odd(n);
    return 0;
}