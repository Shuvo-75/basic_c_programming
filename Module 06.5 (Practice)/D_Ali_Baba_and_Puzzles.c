#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x1 = a + b - c;
    int x2 = a + b * c;
    int y1 = a - b + c;
    int y2 = a - b * c;
    int z1 = a * b + c;
    int z2 = a * b - c;

    if (x1==d || x2==d || y1==d || y2==d || z1==d || z2==d )
    {
        printf("YES");
    } else
    {
        printf("NO");
    }
    

    return 0;
}