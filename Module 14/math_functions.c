#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x = ceil(4.56);
    int x1 = floor(4.56);
    int x2 = round(4.56);
    int x3 = round(4.45);
    int x4 = sqrt(25);
    int x5 = abs(-3458);
    int x6 = abs(456);
    printf("x - %d\nx1 - %d\nx2 - %d\nx3 - %d\nx4 - %d\nx5 - %d\nx6 - %d\n", x, x1, x2, x3, x4, x5, x6);
    return 0;
}