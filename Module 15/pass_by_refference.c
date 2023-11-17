#include<stdio.h>
void fun(int *ptr)
{
    *ptr = 500;
    // printf("ptr er address - %p\n", ptr);
    // printf("main er x er value - %d\n", *ptr);
}
int main()
{
    int x = 200;
    // printf("x er adress - %p\n", &x);
    fun(&x);
    printf("x er value - %d\n", x);
    return 0;
}