#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    int sl = strlen(a);
    for (int i = 0; i<=sl; i++)
    {
        if (a[i]==',')
        {
            a[i] = ' ';
        }
    }
    for (int i = 0; i<=sl; i++)
    {
        while (a[i]!='\0')
        {
            if (a[i]>= 'A' && a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }else if (a[i]>='a' && a[i]<='z')
            {
                a[i] = a[i] - 32;
            }
            i++;
        }
        
    }
    printf("%s", a);
    
    return 0;
}