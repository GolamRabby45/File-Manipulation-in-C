#include<stdio.h>
#include<ctype.h>

int main(){

    char str [] = "My name is Golam Rabby";
    char ch;
    int x;

/*
    while((ch = str[x]) != '\0')
    {
        if(isalpha(ch))
            putchar('_');
        else    
            putchar(ch);
        x++;
    }
*/

/*
    for (x = 0; str[x] != '\0'; x++)
    {
       printf("%c", str[x]);

    }
*/

    for (x = 0; str[x] != '\0'; x++)
    {
        str[x] = tolower(str[x]);
        printf("%c", str[x]);
    }

    return 0;

}