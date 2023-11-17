#include<stdio.h>
void multi(double x, double y)
{
    double z = x * y;
    printf("%0.3lf\n", z);
    return;
}

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    multi(x,y);
    return 0;
}