#include<stdio.h>
void fun(int a[], int n, int i)
{
    if(i==n) return;
    printf("%d ", a[i]);
    fun(a, n, i+1);
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
    fun(a, n, 0);

    
    return 0;
}