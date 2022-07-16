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

    for(x = 0; x < 10; x++)
    {
        fread(&a, sizeof(int), 1, fp);
        printf("%d\n", a);
    }

    fclose(fp);

    return 0;
}