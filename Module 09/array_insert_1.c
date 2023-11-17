#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos, val;
    scanf("%d", &pos, &val);

    for (int i = n; i >= pos+1; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = 100;

    // normal print
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // reverse print
    int temp;
    int i = 0, j = n;
    
    while (i<j) 
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    
    
    
    
    return 0;
}