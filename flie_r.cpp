#include <stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("text.txt","r");// mo file
	char myString[100];
	fgets(myString,100,fptr);
	printf("thong tin file text.txt la: %s",myString);//thap tac moi file
	
	fclose(fptr);// dong file



return 0;
}

