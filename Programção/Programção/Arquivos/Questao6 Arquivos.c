#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	char c;
	FILE *arquivo;
	FILE *arquivo2;
	arquivo = fopen("bobbob.jpeg","rb+");
	arquivo2 = fopen("copia.jpeg","rb+");
	while(fread(&c,sizeof(char),1,arquivo)){
		fwrite(&c,sizeof(char),1,arquivo2);
	}
}