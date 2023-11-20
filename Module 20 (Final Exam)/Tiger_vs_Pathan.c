#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char str[n+1];
        for (int i = 0; i < n+1; i++)
        {
            scanf("%c", &str[i]);
        }
        int countP = 0;
        int countT = 0;
        for (int i = 0; i < n+1; i++) 
        {
            if (str[i] == 'P') 
            {
                countP++;
            } else if (str[i] == 'T') 
            {
                countT++;
            }
        }
        if (countT>countP)
        {
            printf("Tiger");
        }else if (countP>countT)
        {
            printf("Pathaan");
        }else
        {
            printf("Draw");
        }
        printf("\n");
    }
    return 0;
}
