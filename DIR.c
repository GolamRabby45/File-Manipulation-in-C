#include<stdio.h>
#include<dirent.h>

int main(){

    DIR *directory; 
    struct dirent *file;


    directory = opendir(".");
    if(directory == NULL)
    {
        printf("failed to open directory");
        return 1;
    }

    puts("opened the requested directory");

/*
    file = readdir(directory);
    printf("found the file %s\n", file->d_name);
*/

    while((file = readdir(directory)) != NULL)
        printf("found the file %s\n", file->d_name);


    closedir(directory);

    return 0;
}

/*
    char *argv = 
    char *argv[] = string of array 
*/

int main(int argc, char *argv[]) {
    return 0;
}