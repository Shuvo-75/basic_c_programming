#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c", &ch);

    char str[101];
    scanf("%s", str);

    char str1[101];
    fgets(str1, 101, stdin);

    char a[101];
    fgets(a, 102, stdin);
    a[100] = '\0';
    
    
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", a);

    return 0;
}