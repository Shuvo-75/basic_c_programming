#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    scanf("%s", a);
    char s[10001];
    scanf("%s", s);
    strcpy(a,s);
    /* manually copy 
    int sl = strlen(s);
    for (int i = 0; i <= sl; i++)
    {
        a[i] = s[i];
    }
    */
    printf("%s", a);
    
    return 0;
}