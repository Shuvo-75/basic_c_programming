#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int primary = 0;
    int secondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                primary = primary + matrix[i][j];
            }
            if (i+j==n-1)
            {
                secondary = secondary + matrix[i][j];
            }

        }
        
    }
    int diff = primary - secondary;
    int absolute_value = abs(diff); 
    printf("%d", absolute_value);
    
    
    return 0;
}