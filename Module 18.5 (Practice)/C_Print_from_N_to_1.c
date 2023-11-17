#include<stdio.h>
void fun(int n, int i)
{
    if(i==(n+1)) return;
    fun(n, i+1);
    printf("%d", i);
    if(i>1) printf(" ");
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 1);
    return 0;
}