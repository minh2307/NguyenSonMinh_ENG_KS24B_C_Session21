#include <stdio.h>

int main(){
	FILE *fptr;// khai bao bien con tro de lam vic voi file
	fptr = fopen("text.txt", "a");// Tao file 
	char fullName[50] = "Nguyen Son Minh";
	fprintf(fptr,"hello %s",fullName);
	
	fclose(fptr);


return 0;
}

