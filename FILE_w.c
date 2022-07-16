#include <stdio.h>

int main(){

    FILE *fp;
    int a;

    fp = fopen("data.txt", "w");
    if(fp == NULL)
    {
        printf("error file opening");
    }

    for(a = 'A'; a <= 'Z'; a++)
    {
        fputc(a, fp);
    }
        
    fclose(fp);

    return 0;
}