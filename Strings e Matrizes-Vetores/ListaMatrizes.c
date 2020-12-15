#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
20) Escreva um programa que armazena 20 valores aleat�rios em uma matriz 4x5.  A matriz
dever� ser uma vari�vel local dentro da fun��o �main�. 
*/
const int linha=8;
const int coluna=12;
#define LINHA 8
#define COLUNA 12

void exibirvetor(int v[]){
	printf("\n");
	for(int i=0;i<linha*coluna;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}

void preencher(int matriz[linha][coluna]){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			matriz[i][j]=rand()%101;		
		}
	}
}

void exibir(int matriz[linha][coluna]){
		printf("\n");
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			printf("%d ",matriz[i][j]);	
		}
		printf("\n");
	}
}

void exibirtransposta(int matriz[linha][coluna]){
		printf("\n");
	for(int j=0;j<coluna;j++){
		for(int i=0;i<linha;i++){
			printf("%d ",matriz[i][j]);	
		}
		printf("\n");
	}
}

/*
21) a quantidade de n�meros pares da matriz;

int numerospares(int matriz[linha][coluna]){
	int qntd=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]%2==0){
				qntd++;
			}
		}
	}
	return qntd;
}
/*
22) a soma dos n�meros �mpares da matriz;

int somaimpar(int matriz[linha][coluna]){
	int soma=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]%2==1)
				soma=soma+matriz[i][j];
		}
	}
	return soma;
}
/*
23) a quantidade de n�meros com valor maior do que a m�dia dos n�meros da matriz;*

int valormaiorqueamedia(int matriz[linha][coluna]){
	int soma=0,qntd=0;
	float media=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			soma=soma+matriz[i][j];
		}
	}
	media=soma/linha*coluna;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]>media)
				qntd++;
		}
	}
	printf("%d ",soma);
	printf("%.1f ",media);
	return qntd;
}
/*
24) o maior valor da matriz;*

int maiorvalor(int matriz[linha][coluna]){
	int maior=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]>maior)
				maior=matriz[i][j];
		}
	}
	return maior;
}
/*
25) o segundo maior valor da matriz;*

int segundomaior(int matriz[linha][coluna]){
	int maior=0,segundo_maior=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
			}
			if(matriz[i][j]>segundo_maior && matriz[i][j]<maior)
				segundo_maior=matriz[i][j];
		}
	}
	return segundo_maior;
}
/*
27) eliminar os n�meros repetidos da matriz. Os n�meros repetidos devem ser substitu�dos por
novos n�meros. Este procedimento dever� exibir na tela todos os elementos da matriz antes e
depois de eliminar os n�meros repetidos.*

void eliminarrepetidos(int matriz[linha][coluna]){
	int vetor[linha*coluna],aux=0;
	exibir(matriz);
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			vetor[aux]=matriz[i][j]; //transformando a matriz em vetor
			aux++;
		}
	}
	for(int i=0;i<linha*coluna;i++){
		for(int j=0;j<linha*coluna;j++){
			if(vetor[i]==vetor[j] && i!=j){ //trocando se for repetido
				vetor[i]=rand()%21;
				i=0;
			}
		}
	}
	aux=0;
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			matriz[i][j]=vetor[aux]; //transformando o vetor em matriz
			aux++;
		}
	}
	exibir(matriz);
}
/*
27)b)Fa�a um procedimento para ordenar a matriz.*

void ordenarmatriz(int matriz[linha][coluna]){
	int v[linha*coluna],aux=0;
	exibir(matriz);
	for(int i=0,cont=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			v[cont]=matriz[i][j];
			cont++;
		}
	}
	for(int i=0;i<linha*coluna;i++){
		for(int j=0;j<linha*coluna;j++){
			if(v[i]<v[j]){
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
		}
	}
	for(int i=0,cont=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			matriz[i][j]=v[cont];
			cont++;
		}
	}
	exibir(matriz);
}
 /*
28) Uma empresa tem registrado em uma tabela os consumos mensais de energia el�trica dos
anos   de   2003   at�   2010.   Cada   linha   representa   um   ano   e   cada   coluna   representa   um   m�s.
Considerando esses dados, fa�a um algoritmo para processar a tabela e produzir as seguintes
informa��es:
1. Consumo m�dio em cada um dos meses;
2. M�s/ano em que houve o maior gasto com energia.*

void empresa(int matriz[linha][coluna]){
	int mes=0,anoconsumo=0;
	float ano[8];
	float maiorconsumo=0;
	for(int i=0;i<8;i++){ //zerando todos os valores do vetor
		ano[i]=0;
	}
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			if(matriz[i][j]>maiorconsumo){
				mes=j;
				anoconsumo=i;
				maiorconsumo=matriz[i][j];
			}
			ano[i]=ano[i]+matriz[i][j];	//soma de todos os valores do m�s
		}
	}
	for(int i=0;i<8;i++){
		ano[i]=ano[i]/12; //media do consumo do ano
		printf("A media do ano %d � %.1f\n",i+2003,ano[i]);
	}
	printf("O maior consumo que � %.1f foi no mes %d do ano %d",maiorconsumo,mes+1,anoconsumo+1);
}
/*
29) Implemente um programa que preenche com valores aleat�rios uma matriz MxN e:
1. armazena em um vetor v1 o maior elemento cadastrado em cada coluna da matriz;
2. armazena em um vetor v2 o menor elemento cadastrado em cada coluna da matriz;
Ao final, o programa deve exibir: a matriz original, o vetor dos maiores elementos e o vetor dos
menores elementos. 
Obs.:
� Os valores de M e N devem ser definidos por meio da diretiva �#define� 
�   Voc�   pode   utilizar   no   m�ximo   dois   comandos   �for�   para   encontrar   os   menores   e   maiores
elementos das colunas.
 A solu��o deve ser implementada no programa principal (�main�), sem utilizar  fun��es.*
 
void problema29(int matriz[LINHA][COLUNA]){
		int v1[COLUNA],v2[COLUNA];
	for(int j=0;j<COLUNA;j++){
		v1[j]=0;
		v2[j]=100;
	}/*
	for(int i=0;i<LINHA;i++){
		for(int j=0;j<COLUNA;j++){
			matriz[i][j]=rand()%101; //preencher a matriz
		}
	}
	exibir(matriz);* //exibir
	for(int i=0;i<LINHA;i++){
		for(int j=0;j<COLUNA;j++){
			if(matriz[i][j]>v1[j]){
				v1[j]=matriz[i][j];
			}
			if(matriz[i][j]<v2[j]){
				v2[j]=matriz[i][j];
			}
		}
	}
	for(int j=0;j<COLUNA;j++){
		printf("Maior da coluna %d:%d Menor da coluna %d:%d\n",j+1,v1[j],j+1,v2[j]);
	}
}*/
 
int main(){
	srand(time(0));
	int matriz[LINHA][COLUNA];
	preencher(matriz);
	exibir(matriz);
	problema29(matriz);
}
