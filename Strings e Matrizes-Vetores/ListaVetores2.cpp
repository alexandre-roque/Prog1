#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

preenchervetor(int *v){
	for(int i=0;i<TAM;i++){
		v[i]=rand()%101;
	}
}
exibir(int *v){
	for(int i=0;i<TAM;i++){
		printf("%d ",v[i]);
	}
}

/*
1) “char * strchar (char *s, char ch)” que retorna o endereço da primeira ocorrência de “ch” em
“s”; caso não exista, retorna NULL (NULL é uma constante simbólica que indica que o ponteiro não
aponta para nenhuma variável). Implemente a função principal (“main”) para testar a função
strchar.*

	char s[50],s2[30];
	char ch;
	printf("Digite a string 1:");
	gets(s);
	printf("Digite a string 2:");
	gets(s2);
	puts(s);
	puts(s2);
*/
char * strchar (char *s, char ch){
    printf("%p ",s[0]);
    char *p;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==ch){
			p=&s[i];
			return p;
		}
	}
}
/*
2) “char * strchar (char *s, char ch)” que retorna o endereço da última ocorrência de “ch” em “s”;
caso não exista, retorna NULL (NULL é uma constante simbólica que indica que o ponteiro não
aponta para nenhuma variável). Implemente a função principal (“main”) para testar a função
strchar.*/

char * strchar2 (char *s, char ch){
	printf("%p ",s[0]);
	char *p;
	int i;
	for(i=0;s[i]!='\0';i++){}
	for(;i>0;i--){
		if(s[i]==ch){
			p=&s[i];
			return p;
		}
	}
	return NULL;
}/*

3) “char *strstr (char *str1, char *str2)” que retorna o endereço de str1 em que ocorre pela
primeira vez a substring str2. Caso não exista, retorna NULL.*/

char *strstr (char *str1, char *str2){
	int tam1=0,tam2=0,aux=100,cont=0,cont2=0;
	char *p;
	for(tam1=0;str1[tam1]!='\0';tam1++){}
	printf("O tam é %d\n",tam1);
	for(int i=0;str1[i]!='\0';i++){
		for(int j=0;str2[j]!='\0';j++){
			if(str1[i]==str2[j]){
				cont++;
				printf("%c ",str1[i]);
				if(aux>i){
					aux=i;
					cont2=i;
				}
				printf("%d %d %d ",cont,cont2,i);
				if(i==cont+cont2-1 && i==tam1-1){
					p=&str1[aux];
					return p;
				}
			}
		}
	}
	return NULL;
}
/*
4) “void calc(int * v, int num, int * xmin, int * xmax)” que coloca nas posições de memórias
apontadas por “xmin” e “xmax” o menor e o maior valor (respectivamente) existentes nos “num”
primeiros inteiros do vetor “v”. */

void calc(int * v, int num, int * xmin, int * xmax){
	int maior=0,menor=100;
	for(int i=0;i<num;i++){
		if(v[i]>maior){
			maior=v[i];
			*xmax=maior;
			}
		if(v[i]<menor){
			menor=v[i];
			*xmin=menor;
		}
	}
}/*

int main(){
	int v[TAM],num;
	int maior, *xmax=&maior;
	int menor, *xmin=&menor;
	preenchervetor(v);
	printf("Digite um num:");
	scanf("%d",&num);
	exibir(v);
	calc(v,num,xmin,xmax);
	printf("\nO maior:%d \nO menor:%d",maior,menor);
}
/*

5) Considere um vetor de N números inteiros que não possui elementos repetidos e
que contém apenas números positivos. Exemplo:
10 12 5 2 8 23 3 7 18 9
0x00 0x04 0x08 0x0C 0x10 0x14 0x18 0x1C 0x20 0x24
Os números abaixo de cada elemento do vetor correspondem aos endereços de
memória de cada elemento.
Implemente um programa que gera um vetor de ponteiros para os elementos do
vetor de número inteiros. Sendo que o primeiro elemento do vetor de
ponteiros deve conter o endereço do maior número do vetor de inteiros, o
segundo elemento deve conter o endereço do segundo maior número do
vetor de inteiros e assim por diante.
Para o vetor de inteiros mostrado acima, o vetor de ponteiros conteria os seguintes
elementos.
0x14 0x20 0x04 0x00 0x24 0x10 0x1c 0x08 0x18 0x0c
Após gerar o vetor de ponteiros. Exiba os elementos do vetor de números
inteiros, em ordem decrescente, utilizando o vetor de ponteiros. Observe que
a primeira posição do vetor de ponteiros (0x14) aponta para o maior elemento do
vetor de inteiros, a segunda posição (0x20) aponta para o segundo maior e assim por
diante. A ordem dos número no vetor de inteiros não deve ser modificada.*/

int main(){
	char s[50],s2[30];
	char ch;
	printf("Digite a string 1:");
	gets(s);
	printf("Digite a string 2:");
	gets(s2);
	printf("%p ",strstr(s,s2));
	puts(s);
	puts(s2);
}

