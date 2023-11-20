#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n!=0)
    {
        for (int i = 0; i < n; i++)
        {
            long long int m, a, b, c;
            scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
            long long int d;

            d = m/(a*b*c);
            if ((d*(a*b*c))==m)
            {
                printf("%lld\n", d);
            } else if ((d*(a*b*c))!=m)
            {
                printf("-1\n");
            }else
            {
                printf("0\n");
            }
        }
    }
    
    
    
    return 0;
}