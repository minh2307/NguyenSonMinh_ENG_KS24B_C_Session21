#include <stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","a");
	char str[100];
	fgets(str,sizeof(str),stdin);
	fgets(str,sizeof(str),fptr);
	fprintf(fptr,"%s",str);
	fclose(fptr);



return 0;
}

