#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s", s);
    char c[5] = "aeiou";
    int s_len = strlen(s);
    int count=0;
    for (int i = 0;s[i]!='\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i]==c[j] && c[j]!='\0')
            {
                count ++;
            }   
        }
    }
    int remain = s_len - count;
    printf("%d", remain);
    
    return 0;
}