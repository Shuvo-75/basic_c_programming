#include<stdio.h>
int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float y = (x*p)/(100-x);
    double price = y + p;

    printf("%0.2f", price);

    return 0;
}