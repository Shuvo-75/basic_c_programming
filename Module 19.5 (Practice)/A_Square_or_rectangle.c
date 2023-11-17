#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int width, height;
        scanf("%lld %lld", &width, &height);
        if (width==height)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    
    return 0;
}