#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int coutn_1 = 0, coutn_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]%3==0)
        {
            coutn_1++;
        }
        else if (a[i]%2==0)
        {
            coutn_1++;
        } 
        else if (a[i]%3==0)
        {
            coutn_2++;
        }
    }
    printf("%d %d", coutn_1, coutn_2);
    
    
    return 0;
}