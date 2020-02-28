#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*1) Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
texto.*/
/*
int main(){
	FILE *arquivo;
	char str[50];
	gets(str);
	arquivo = fopen("arquivo.txt","w+");
	for(int i=0;str[i]!='\0';i++){
		fwrite(&str[i],sizeof(char),1,arquivo);
	} 
	fclose(arquivo);
}*
int main(){
	FILE *arquivo;
	char str[50];
	gets(str);
	arquivo = fopen("arquivo.txt","");
	fwrite(str,sizeof(char),strlen(str),arquivo);
	fclose(arquivo);
}*/

/*2) Implemente um programa que abra o arquivo texto criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome./*

int main(){
	FILE *arquivo;
	int cont=0;
	char ch;
	arquivo = fopen("arquivo.txt","r");
	while (fscanf(arquivo, "%c", &ch)!= EOF){
		if(ch =='a' || ch == 'A')
			cont++;
	}
	printf("%d\n",cont);
	fclose(arquivo);
}*
3) Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
binário.*
int main(){
	FILE *arquivo;
	char str[50]="Alexandre Roque Silva de Paula";
	arquivo = fopen("arquivo.bin","wb");
	fwrite(str,sizeof(char),strlen(str),arquivo);
	fclose(arquivo);
}*
4) Implemente um programa que abra o arquivo binário criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome.*
int main(){
	FILE *arquivo;
	char ch; int cont = 0;
	arquivo = fopen("arquivo.bin","rb");
	while(fscanf(arquivo, "%c" ,&ch)!=EOF){
		if(ch == 'a' || ch == 'A')
			cont++;
	}
	printf("%d\n",cont);
	fclose(arquivo);
}*
5) Implemente um programa que solicite um nome de arquivo ao usuário e conte a quantidade
de bytes do arquivo informado. Teste seu programa com os arquivos criados nos exercícios
anteriores.*/
int main(){
	FILE *arquivo;
	char nome_programa[50]; int qntdbytes;
	printf("Digite o nome do arquivo:");
	gets(nome_programa);
	arquivo = fopen(nome_programa,"ab");
	printf("%ld\n",ftell(arquivo));
	fclose(arquivo);
}/*
6) Implemente um programa que realiza a cópia de um arquivo. Teste seu programa com um
arquivo de áudio ou uma imagem.*/
