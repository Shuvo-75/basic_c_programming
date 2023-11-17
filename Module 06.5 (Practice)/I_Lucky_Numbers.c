#include<stdio.h>
int main()
{
    int n;
    scanf("%d",  &n);
    if(n>9)
    {
        int x = n/10;
        int y = n%10;
        if(y != 0)
        {
            if(x%y == 0 || y%x == 0)
            {
             printf("YES");
            }else
            {
                printf("NO");
            }
        } else if(y==0)
        {
            printf("YES");
        }
    }

    return 0;
}