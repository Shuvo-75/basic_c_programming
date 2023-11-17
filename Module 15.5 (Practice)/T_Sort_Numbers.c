#include<stdio.h>
int fun()
{
    int n = 3;
    int a[3];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        ar[i] = a[i];
    }
    
    int tem;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
    
    
}
int main()
{
    fun();
    return 0;
}