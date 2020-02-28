#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int confere(char *str1, int pos){
	int j=0;
	for(int i=pos;str1[i]!='\0';i++){
		if(str1[i]!=' '){
			return i;
		}
	}
}


char *inicias(char *str1){
	int j=0,k=0;
	char *str2=malloc(sizeof(char)*20);
	if(str1[0]!=' '){
			str2[k]=str1[0];
			k++;
		}
	for(int i=0;str1[i]!='\0';i++){
		if(str1[i]==' '){
			j=confere(str1,i);
			str2[k]=str1[j];
			k++;
			i=j;
		}
	}
	return str2;
}

int main(){
	char str1[30];
	gets(str1);
	puts(inicias(str1));
}