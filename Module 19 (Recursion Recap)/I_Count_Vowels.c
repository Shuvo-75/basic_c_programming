#include<stdio.h>
#include<string.h>

int check_vowel(char str[],int i)
{
    if(str[i]=='\0') return 0;
    int ans = check_vowel(str, i+1);
    if(str[i]>= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + 32;
    }
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return ans + 1;
    }
    else 
    {
        return ans;
    }
    
} 
int main()
{
    int n = 201;
    char str[n];
    fgets(str, 201, stdin);
    int count = check_vowel(str, 0);  
    printf("%d", count);
    return 0;
}