#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first, last, line;
    if (n%2!=0)
    {
        last = n/2;
    }
    line = last + 6;
    int space = line - 1;
    int star = 1;
    int new_space = 5;
    int new_star = n;
    for (int i = 1; i <= line+5; i++)
    {
        if (i<=line)
        {
            for (int j = 0; j < space; j++)
            {
                printf(" ");
            }

            for (int j = 0; j < star; j++)
            {
                printf("*");
            }
        
            space--;
            star +=2;
        }
        else
        {
            for (int i = 0; i < new_space; i++)
            {
                printf(" ");
            }
            for (int j = 0; j < new_star; j++)
            {
                printf("*");
            }
             
        }
        
        printf("\n");
        
    }
    
    return 0;
}