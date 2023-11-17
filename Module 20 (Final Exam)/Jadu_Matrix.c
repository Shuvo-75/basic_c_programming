#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        } 
    }
    int flag = 1;
    if (row!=col)
    {
        flag = 0;
    } 

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i+j)==(row-1) || i==j)
            {
                if (matrix[i][j]!=1)
                {
                    flag = 0;
                }  
            }
            else
            {
                if (matrix[i][j]!=0)
                {
                    flag = 0;
                }
                
            }
        }
        
    }
    
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}