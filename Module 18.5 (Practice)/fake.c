#include<stdio.h>
long long int fun(int a[], int n, int i)
{
    if(i==n) return 0;
    long long int sum = fun(a, n, i+1);
    return sum + a[i];
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int x = fun(a, n, 0);
    printf("%lld", x);
    return 0;
}