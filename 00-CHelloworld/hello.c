#include <stdio.h>

#define OK 0

#define ERROR -1

int main(void) {

    FILE *fp;

    fp = fopen("output.txt", "w");

	if(fp == NULL){

		fprintf(stderr,"ERROR!\n");

		return ERROR;

	}

	fprintf(fp, "Hello, world!\n");

	fclose(fp);

    printf("Hello, world!\n");
    
    return OK;

}