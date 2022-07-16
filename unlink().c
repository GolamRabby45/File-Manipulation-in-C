#include<stdio.h>
#include<unistd.h>

/*
    rename() - renames a file 
    unlink() - removes a file 
*/

int main() {

/*
    int re;

    re = rename("data.txt", "data_random.txt");

    if(re == 0)
    {
        printf("renaming is successful");
    }
    else
    {
        printf("renaming is not successful");
    }
*/

    int u;
    u = unlink("d.txt");
    if(u == 0)
        puts("file deleted");
    else
        puts("file not found");

    return 0;
}