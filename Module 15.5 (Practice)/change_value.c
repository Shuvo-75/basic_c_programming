#include<stdio.h>
int change_it(int *ar, int n)
{
    ar[n-1] = 100;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    change_it(ar, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}

/* 2nd way
#include<stdio.h>
int change_it(int n)
{
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    ar[n-1] = 100;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    change_it(n);
    return 0;
}

*/