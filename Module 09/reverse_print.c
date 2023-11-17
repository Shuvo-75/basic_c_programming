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

    //swaping 
    int i=0,j=n-1;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--; 
    }

    //final array print
    for (int  i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}