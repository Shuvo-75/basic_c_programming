#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int  j = 0; j < n; j++)
    {
        char s[10001];
        scanf("%s", s);
        int upper = 0, lower = 0, digit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i]>='a' && s[i]<='z')
            {
                lower++;
            }else if (s[i]>='A' && s[i]<='Z')
            {
                upper++;
            }else if (s[i]>='0' && s[i]<='9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", upper, lower, digit);
    }
    
    
    
    return 0;
}