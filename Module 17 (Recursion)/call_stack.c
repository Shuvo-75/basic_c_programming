#include<stdio.h>
void world()
{
    printf("World is Start\n");
    printf("World is end\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main end\n");
    return 0;
}