#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
12) Implemente uma função que conta e retorna a quantidade de caracteres existente em um
string passado como parâmetro.

int contar(char string[] ){
	int i;
	for(i=0;string[i]!='\0';i++){}
	i--;
	return i;
}

13)  Implemente o procedimento “void concatenar (char s1[], char s2[])” que copia o string
s2 a partir do final de s1. Exemplo: s1 = “abc”, s2= “def”, após o procedimento concatenar s1 terá
o conteúdo s1= “abcdef”.

void concatenar(char s[], char s2[]){
	int tam,tam2;
	for(tam=0;s[tam]!='\0';tam++){}
	for(tam2=0;s2[tam2]!='\0';tam2++){}
	for(int i=tam-1, j=0; i<tam+tam2-1 ; i++,j++){
		s[i]=s2[j];
	}
}
14) Implemente o procedimento void copia (char origem [ ], char destino [ ]) que faz uma
cópia do vetor origem no vetor destino. 

void copia (char origem [ ], char destino [ ]){
	int i;
	for(i=0; origem[i]!='\0' ; i++){}
	for(int j=0; j<i ; j++){
		destino[j]=origem[j];
	}
}

15)   Implemente o procedimento void copia (char origem [ ], char destino [ ], int n)  que
copia os primeiros n caracteres do vetor origem para o vetor destino. 

void copian (char origem [ ], char destino [ ], int n){
	for(int i=0; i<n ; i++){
		destino[i]=origem[i];
	}
}

16)  Implemente a função int compara (char string1 [ ], char string2 [ ]) que retorna 1 caso
as strings sejam iguais e 0 caso contrário.

int compara (char string1 [ ], char string2 [ ]){
	int tam1,tam2;
	for(tam1=0;string1[tam1]!='\0';tam1++){}
	for(tam2=0;string2[tam2]!='\0';tam2++){}
	if(tam1!=tam2)
		return 0;
	for(int i=0;i<tam1;i++){
		if(string1[i]!=string2[i])
			return 0;	
	}
	return 1;
}

17)   Implemente o procedimento  void imprime_sobrenome (char nome_completo[ ])  que
recebe o nome completo de uma pessoa e imprime o último nome. Por exemplo, para o nome
completo “Jose Maria da Silva”, o programa deve exibir: “Silva”.

void imprime_sobrenome(char nome[]){
	int i,j;
	for(i=0;nome[i]!='\0';i++){}
	for(j=i;nome[j]!=' ';j--){}
	for(j++ ;j<i;j++){
		printf("%c",nome[j]);
	}
}

18)   Implemente o  void eliminar(char v [ ], char ch)  que elimina todas as ocorrências do
caractere“ch” no vetor de caracteres “v”. Ao eliminar um caractere, os outros elementos do vetor
devem ser movidos para esquerda. Por exemplo: v = “programacao de computadores” e ch = 'a'. Ao
final do procedimento o conteúdo de “v” deverá ser “progrmco de computadores”. Você não pode
utilizar um vetor auxiliar para implementar o procedimento.

void eliminar(char v [ ], char ch){ 
	for(int i=0;v[i]!='\0';i++){
		if(v[i]==ch){
			for(;v[i]!='\0';i++){
				v[i]=v[i+1];
			}
			i=-1;
		}
	}
}*/

int main(){
	char string[50] , string2[20];
	fgets(string,50,stdin);
	eliminar(string, 'a');
	puts(string);	
}