#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, max, min;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = 0;
    max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[min]>a[i])
        {
           min = i;
        }
        if (a[max]<a[i])
        {
           max = i;
        }     
    }
    int temp = a[min];
    a[min] = a[max];
    a[max] = temp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}