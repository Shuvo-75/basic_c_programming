#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    fgets(a, 21, stdin);
    a[19] = '\0';
    printf("%s", a);
    return 0;   
}


/* using gets()
    char a[20];
    gets(a);
    printf("%s", a);
    return 0;     
*/
/* using fgets()

*/