#include <stdio.h>

int main(){
    const char filename [] = "integers.txt";
    int x, a;

    FILE *fp;
    fp = fopen(filename, "w");
    if(fp == NULL)
    {
        printf("error file opening");
    }

    a = 10;
    for(x = 0; x < 10; x++)
    {
        fwrite(&a, sizeof(int), 1, fp);
        a += 5;
    }

    fclose(fp);

    return 0;
}