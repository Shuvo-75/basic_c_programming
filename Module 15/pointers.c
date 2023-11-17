#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    printf("x - address %p\nx - value %p\n", &x, ptr);
    printf("%p\n", &ptr);
    printf("%d", sizeof(ptr));
    return 0;
}