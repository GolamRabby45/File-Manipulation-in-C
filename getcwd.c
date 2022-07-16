#include<stdio.h>
#include<unistd.h>

int main(){
    char path [512];
    //chdir(".."); // go to previous directory 
    getcwd(path, 512);

    printf("The program is running in %s directory", path);
    return 0;
}