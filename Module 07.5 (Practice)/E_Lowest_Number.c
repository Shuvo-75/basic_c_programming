#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min;
    int pos;
    for (int i = 1; i <= n; i++)
    {
        if(min>a[i])
        {
            min = a[i];
            pos = i;
        }
    }
    printf("%d %d", min, pos);
    
    return 0;
}