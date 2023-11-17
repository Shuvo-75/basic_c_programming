#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // array input
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // position select for delete 
    int pos;
    scanf("%d", &pos);
    for(int i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    // final array print
    for(int i=0; i<n-1; i++)
    {
        printf("%d ", arr[i]);
    }
}