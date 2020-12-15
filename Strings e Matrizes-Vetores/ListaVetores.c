#include<stdio.h>
#include <time.h>	
#include<stdlib.h>

const int tam=15;

void preencher(int vetor[]){
	int cont=0;
		for(;cont<tam;cont++){
			vetor[cont]=rand()%101;
	}
}

void exibir(int vetor[]){
	int cont=0;
		for(;cont<tam;cont++){
			printf("%d\n",vetor[cont]);
	}
	printf("\n");
}
/*
2) a quantidade de n�meros pares do vetor;

int somapar(int num[]){
	int cont=0;
	for(;cont<tam;cont++){
		if(num[cont]%2==0)
			cont++;
	}
	return soma;
}

3) a soma dos n�meros �mpares do vetor;

int somaimpar(int num[]){
	int cont=0,soma=0;
	for(;cont<tam;cont++){
		if(num[cont]%2==1)
			soma=soma+num[cont];
	}
	return soma;
}

4) a quantidade de n�meros com valor maior do que a m�dia dos n�meros do vetor;

int media(int num[]){
	int cont=0,soma=0,media=0,qtd=0;
	for(;cont<tam;cont++){
			soma=soma+num[cont];
	}
	media=soma/tam;
	for(int i=0;i<tam;i++){
		if(num[i]>media)
			qtd++;
	}
	return qtd;
}

5) o maior valor do vetor;

int maiorvalor(int vetor[]){
	int i=0,num,maior;
	maior = vetor[i];
	for(;i<tam;i++){
		if(vetor[i]>maior)
			maior=vetor[i];
	}
	return maior;
}

6) a maior diferen�a em valor absoluto entre elementos consecutivos do vetor;

int maior_diferenca(int v[]){
	int maiordif=0,i;
	for(i=0; i<tam; i++){
		if(v[i]-v[i+1]>maiordif)
			maiordif=v[i]-v[i+1];
	}
	return maiordif;
}

7) colocar em ordem crescente os elementos do vetor. No programa principal, exiba o vetor
antes e depois de orden�lo.

void ordernar(int v[]){
	int i,aux,cont=0;
		for(int i=0;i<tam;i++){
			for(int j=i+1;j<tam;j++){
				if(v[i]>v[j]){
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
				}
			}
		}	
}

8) exibir o 3o. maior elemento do vetor. Por exemplo: v={2,4,4,1,3,6,5,6}   3o. Maior= 4. 

void terceiromaior(int v[]){
	int cont=0;
	for(int i=14;i>0;i--){
		if(v[i-1]<v[i])
			cont++;
		if(cont==3)
			printf("O terceiro maior �:%d ",v[i]);
	}
	printf("\n");
}

9) eliminar n�meros repetidos do vetor. Os n�meros repetidos devem ser substitu�dos por
novos n�meros. Este procedimento dever� exibir na tela todos os elementos do vetor, antes e depois
de eliminar os n�meros repetidos.

void eliminarrepetidos(int v[]){
	exibir(v);
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			while(v[i]==v[j] && i!=j){
				v[i]=rand()%101;
				j=0;
			}
		}
	}
	ordernar(v);
	exibir(v);
}

10) Implelmente a fun��o float max(float v [ ], int n) que retorna o maior n�mero entre os n
primeiros elementos de um vetor.

float max(int v[], int n){
	int maior=0;
	for(int i=0;i<n;i++){
		if(v[i]>maior)
			maior=v[i];
	}
	return maior;
}

11)  Implemente a fun��o int compara (int vetor1 [ ], int vetor2 [ ]) que retorna 1 caso os
vetores   sejam  iguais  e  0  caso   contr�rio.   A  quantidade  de  elementos   em  cada  vetor   pode  ser
diferente. Se julgar necess�rio, passe outros par�metros para a fun��o.


int compara(int v1[], int tam1, int v2[],int tam2){
	int cont=0;
	if(tam1!=tam2)
		return 0;
	else {
		for(int i=0;i<tam;i++){
			if(v1[i]!=v2[i])
				return 0;
		}
	return 1;
	}
}


int comparatodos(int v1[], int tam1, int v2[],int tam2){
	int cont=0;
	if(tam1!=tam2)
		return 0;
	else {
		for(int i=0;i<tam;i++){
			for(int j=0;j<tam;j++){
				if(v1[i]==v2[j])
					cont=1;
				if(cont==0)
					return 0;
			}
		}
	return 1;
	}
}
*/
int main(){
	srand(time(0));
	int v[tam];
	preencher(v);
	exibir(v);
}
