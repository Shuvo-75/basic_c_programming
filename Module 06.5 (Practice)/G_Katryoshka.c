// Second Time Try And Solve
#include<stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int min = a;
    if(a==0 || c==0)
    {
        printf("0");
    }else
    {
        if(b<min)
        {
            min = b;
        } 
        if(c<min)
        {
            min = c;
        }
        if(min-a==0 || min-c==0)
        {
            printf("%lld", min);
        } else
        {
            long long int x = (a-min)/2;
            long long int y = c - min;
            if(x<=y)
            {
                printf("%lld", min+x);
            }else
            {
                printf("%lld", min+y);
            }
        }
    }
    
    
    return 0;
}

/* First Try And Solve
#include <stdio.h>
 
int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int x = n/2;
    if((m<=n) && (m<=k) && (n!=0) && (k!=0) && (m!=0))
    {
        long long int sum = m;
        long long int n1 = n-m;
        long long int k1 = k-m;
        long long int n2 = n1/2;
        
        if((n1!=0) && (k1!=0) && (k1>=n2))
        {
            long long int sum1 = sum + n2;
            printf("%lld", sum1);
        } 
        else if((n1!=0) && (k1!=0) && (k1<=n2))
        {
            long long int sum2 = sum + k1;
            printf("%lld", sum2);
        } 
        else if (n1==0 || k1 ==0)
        {
            printf("%lld", sum);
        }
        
        
    } 
    else if ((n<=m) && (n<=k) && (n!=0) && (k!=0) && (m!=0))
    {
        printf("%lld", n);
    } 
    else if((k<=n) && (k<=m) && (n!=0) && (k!=0) && (m!=0))
    {
        printf("%lld", k);
    } 
    else if ((m==0) && (x<=k))
    {
        printf ("%lld", x);
    } 
    else if((m==0) && (x>=k))
    {
        printf("%lld", k);
    } 
    else if ((n==0) || (k==0))
    {
        printf("0");
    } 
    
    return 0;
}

*/