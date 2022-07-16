#include<stdio.h>
#include<stdbool.h>



typedef union Data{
    float f;
    int i;
    char str [100];
} data;


int main() {

    data d;
    d.i = 10;
    printf("%d\n", d.i);
    printf("The size of the union is: %zu bytes", sizeof(data));

    return 0;
}