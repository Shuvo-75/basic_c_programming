#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int M2_day = (M1*D)/(M1+M2);
        int remaining_day = D - M2_day;
        printf("%d\n", remaining_day);
    }
    return 0;
}