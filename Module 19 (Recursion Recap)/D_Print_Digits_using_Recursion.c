#include<stdio.h>
void fun(long long int n)
{
    if(n==0) return;
    int x = n%10;
    fun(n/10);
    printf("%d ", x);
}
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        long long int n;
        scanf("%lld", &n);
        fun(n);
        if (n==0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    return 0;   
}