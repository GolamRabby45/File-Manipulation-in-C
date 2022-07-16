#include<stdio.h>

/*
    FILE stream in C
    1. stdin -- 0
    2. stdout -- 1 
    3. stderr -- 2 
*/

/*
    FILE *handle;
    File-handling functions:
        --fgets();
        --fgetc();
        --fscanf();
*/

/*
    r - open a file for reading 
    w- open a file for writing 
    a- open a file for appending(creation)
    r+, w+, a+ -- open a file for reading and writing 
    wx, w+x -- write but do not overwrite an existing file 
*/


int main(){

    const char filename [] = "c_str_01.c";
    FILE *fp;
    int ch;
    char buffer [64];

    fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("file does not exist %s\n:", filename);
        return 1;
    }

    //printf("file opened %s\n", filename);

    // reading the contents of the file with fgetc
/*
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        putchar(ch);
    }
*/
    // fgets implementation 
    while(fgets(buffer, 64, fp))
        printf("%s", buffer);

    fclose(fp);

    return 0;

}