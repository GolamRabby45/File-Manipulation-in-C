#include<stdio.h>
#include<stdbool.h>

/* some notes on volatile type qualifier 
    three type of variables should use volatile 
    --> memory-mapped pripheral registers 
    --> global variables (not stack variables) modified by an ISR (interrupt service riutine)
    --> global variables accessed by multiple tasks within a multi-threaded applicaton 
*/

/*
    *output = 'O';
    *output = 'N';

    volatile char *output; --> to invokde the compiler not to do any optimizations on output
*/

/* three nulls 
    --> null terminated character '\0'
    --> NULL or nullptr 
    --> null statement [;]
*/


//int getc(FILE *stream);

int main() {
    char ch = '\0';
    printf("Enter your typed character:\n");
    ch = getc(stdin);

    printf("Your typed character is: %c\n", ch);

    return 0;
}