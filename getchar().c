#include<stdio.h>

int main() {

    char ch;
    char ch1;
    char ch2;

    int a;

/*
    printf("Enter a character:\n");
    ch = getchar();
    printf("The character is: %c\n", ch);
*/


/*
    printf("Enter a character:\n");
    ch1 = getc(stdin);
    ch2 = getc(stdin);
    printf("%c\n%c", ch1, ch2);
*/

    printf("Enter characters:\n");
    
    while(1)
    {
        a = getchar();
        if(a == EOF)
            break;
        putchar(a);
    }


    return 0;
}