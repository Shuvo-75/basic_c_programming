#include<stdio.h>
void fun(int i)
{
    if(i==6) return;
    fun(i+1);
    printf("%d ", i);

}
int main()
{
    // int n;
    // scanf("%d", &n);
    fun(1);
    return 0;
}