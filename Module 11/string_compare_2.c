#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n], b[n];
    scanf("%s %s", a, b);
    int temp = strcmp(a,b);
    if (temp<0)
    {
        printf("B is greater than A");
    }
    else if (temp>0)
    {
        printf("A is greater than B");
    } else
    {
        printf("Both are same");
    }
    
    
    return 0;
}

// use strcmp function use