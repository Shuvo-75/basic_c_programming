#include<stdio.h>
int main()
{
    int y;
    scanf("%d", &y);

    for (int k = 0; k < y; k++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
        int m; 
        scanf("%d", &m);
        int ans = -1;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == m) {
                ans = i;
                break;
            }
        }

        if (ans >= 0) 
        {
            printf("YES\n");
        } else 
        {
            printf("NO\n");
        }
    }
    
    return 0;
}