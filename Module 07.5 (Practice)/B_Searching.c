#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    int x;
    scanf("%d", &x);
    int ans = -1;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    
    
    
    return 0;
}


/*
this code accepted but testcase 2 error in vs code compiler
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int val;
    scanf("%d", &val);
    int pos;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==val)
        {
            pos = i;
            break;
        } 
        
    }

    
    if (a[pos]==val)
    {
        printf("%d", pos);
    } else
    {
        printf("-1");
    }

    return 0;
}

*/