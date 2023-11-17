#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int even = 0, odd=0, positive=0, negative=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            positive++;
        }
        if (a[i]<0)
        {
            negative++;
        }
        if (a[i]%2==0)
        {
            even++;
        }
        if (a[i]%2!=0)
        {
            odd++;
        }
        
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
    
}