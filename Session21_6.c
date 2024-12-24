#include<stdio.h>
int main(){
	char a[100];
	FILE *bt01, *bt06;
	bt01 = fopen("bt01.txt","r");
	bt06 = fopen("bt06.txt","w");
	while(fgets(a,100,bt01)!=NULL){
		fputs(a,bt06);
	}
	fclose(bt01);
	fclose(bt06);


return 0;

}

