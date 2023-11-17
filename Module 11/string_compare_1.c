#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n], b[n];
    scanf("%s %s", a, b);
    int i=0;
    while (1)
    {
        // null checking 
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Both are same");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("B is greater than A");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("A is greater than B");
            break;
        }
        
        if (a[i]==b[i])
        {
            printf("Both are same");
            break;
        } 
        else if (a[i]<b[i])
        {
            printf("B is greater than A");
            break;
        }
        else
        {
            printf("A is greater than B");
            break;
        }
        
    }
    
    return 0;
}

// use logical way