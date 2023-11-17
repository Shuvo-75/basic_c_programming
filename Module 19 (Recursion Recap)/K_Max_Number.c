#include<stdio.h>
#include<limits.h>
int max(int arr[], int n, int i)
{
    if (i==n)
    {
        return INT_MIN;
    }
    
    int mx = max(arr, n, i+1);
    if (arr[i] > mx)
    {
        return arr[i];
    } else
    {
        return mx;
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mx = max(arr, n, 0);
    printf("%d", mx);
    return 0;
}