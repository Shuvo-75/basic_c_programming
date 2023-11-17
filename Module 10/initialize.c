#include<stdio.h>
int main()
{
    // char a[6] = {'S', 'h', 'u', 'v', 'o'}; // no gurantee
    char a[6]="Shuvo";
    // int sz = sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s", a);


    /*
    for(int i=0; i<5; i++)
    {
        printf("%c\n", a[i]);
    }
    */
    return 0;
}


/*
    string have special feature
    char a[5] = {}

*/