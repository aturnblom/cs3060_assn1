//Allison Noot
//CS3060-001 Spring 2017
//Assignment 1
/* Promise of Originality
I promise that this source code file has, in its entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/
#include <stdio.h>
int main(int argc, char *argv[]){
    printf("Saving the contents of the parameters into a file\n");
    FILE * fp = stdout;
    if(argc == 1){
        fprintf(fp, "Argument #0 %s\n", argv[0]);
    }
    if(argc > 1){
        fp = fopen(argv[1], "w");

        if(fp == NULL){
            perror("File open error");
            return -1;
        }
        for (int i = 0; i < argc; i++){
            fprintf(fp,"Argument #%d: %s\n",i,argv[i]);
        }
        fclose(fp);
    }
    printf("number of Arguments printed %d\n",argc);
    return 0;
} //end of main
