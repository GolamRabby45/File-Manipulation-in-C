#include <stdio.h>

int main(){

    FILE *fp;
    int a;

    fp = fopen("data.txt", "a");
    if(fp == NULL)
    {
        printf("error file opening");
    }

    for(a = 'a'; a <= 'z'; a++)
    {
        fputc(a, fp);
    }

    fclose(fp);

    return 0;
}