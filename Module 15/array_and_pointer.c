#include<stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    // printf("0th index er adress - %p\n", &ar[0]);
    // printf("0th index er adress - %p\n", ar);
    // printf("0th index er value - %d\n", ar[0]);
    // printf("0th index er value - %d\n", *ar);
    // printf("1st index er value - %d\n", ar[1]);
    // printf("1st index er value - %d\n", *(ar+1));

    // printf("%d ", *(ar + 2));
    // printf("%d ", *(ar + 3));
    // printf("%d ", *(ar + 4));

    printf("%d\n", *(ar+1));
    printf("%d\n", *(1+ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1[ar]);

    /*
    ar[1] ==> *(ar+1)
    *(ar+1) ==> ar[1]
    *(1+ar) ==> ar[1] or 1[ar]
    */

    return 0;
}