#include<stdio.h>
void fun(int *ar, int n)
{
    ar[0] = 500;
}
int main()
{
    int ar[5] = {10, 20, 30, 30, 50};
    fun(ar, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}