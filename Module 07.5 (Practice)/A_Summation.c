#include<stdio.h>
int main()
{
    long long int n;
    long long int i;
    scanf("%lld", &n);
    long long int a[n];
    long long int sum = 0;
    for(i = 0; i<n; i++)
    {
        scanf("%lld", &a[i]);
        if(i<n)
        {
            sum = sum + a[i];
        }
    }
    if (sum<0)
    {
        long long int sum1 = sum * (-1);
        printf("%lld", sum1);
    }else
    {
        printf("%lld", sum);
    }
    
    
    
    return 0;
}