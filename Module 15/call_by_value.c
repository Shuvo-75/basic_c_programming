#include<stdio.h>
void fun(int x)
{
    x = 200;
    // printf("fun x er adress - %p\n", &x);
}
int main()
{
    int x = 20;
    // printf("x  er adress - %p\n", &x);
    fun(x);
    printf("%d\n", x);
    return 0;
}