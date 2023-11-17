#include<stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int count[M+1];
    for (int i = 0; i < M+1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < N && a[i]<=M; i++)
    {
        int value = a[i];
        count[value]++;
    }
    for (int i = 1; i < M+1; i++)
    {
        printf("%d\n", count[i]);
    }
    
    return 0;
}