#include<stdio.h>
int main()
{
    int n = 1999;
    int x; 
    while (scanf("%d", &x) != EOF)
    {
        if(x==n)
        {
            printf("Correct");
            break;
        } else
        {
            printf("Wrong\n");
        }
    }
    
    
}