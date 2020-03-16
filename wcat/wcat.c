#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    //if no files provided, throw error
    if (argc <2) {
        printf("wcat: cannot open file\n");
        exit(1);
    }
    for (int a = argc; a > 1; a = a-1){
        char str[255];
        FILE *fp = fopen(argv[a-1], "r");
        if (fp == NULL) {
            printf("wcat: cannot open file\n");
            exit(1);
        } 
        while(1){
        fgets (str, 255, fp); 
            if (feof(fp)){
                break;
            }
            //print the file
            printf("%s",str);
        }
    }
}
