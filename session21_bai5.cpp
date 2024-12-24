#include <stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt05.txt","a");
	int n;
	char str[100];
	printf("Moi ban nhap so dong: ");
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n; i++){
		printf("Moi ban nhap dong thu %d: ",i+1);
		fgets(str,sizeof(str),stdin);
		fprintf(fptr,"%s",str);
	}
	fclose(fptr);
	for(int i=0; i<n; i++){
		printf("%s",str);
	}


return 0;
}

