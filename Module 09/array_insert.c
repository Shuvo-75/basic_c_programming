#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1]; // n+1 because of one extra value insert. 

    //input array
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    // input index and value and inserion 
    int pos, val;
    scanf("%d %d", &pos, &val);

    for(int i=n; i>=pos+1; i--)
    {
        arr[i] = arr[i-1];
    }

    // final array print
    arr[pos] = val;
    for(int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}