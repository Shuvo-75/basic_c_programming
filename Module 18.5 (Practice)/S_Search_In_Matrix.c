#include<stdio.h>
int main()
{
    int col, row;
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]==x)
            {
                flag = 0;
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("will take number");
    } else
    {
        printf("will not take number");
    }
    
    
    
    return 0;
}