#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*4) Implemente um programa que preenche aleatoriamente dois vetores Q e R com 12 e 20
elementos inteiros (valores repetidos ou não) respectivamente. Implemente um procedimento que
recebe os vetores Q, R e um terceiro vetor W. O procedimento deverá preencher o vetor W com a
interseção de Q e R. Além disto, W não poderá conter elementos repetidos. Exiba o conteúdo do
vetor W no programa principal. Utilize a função malloc para os vetores Q e R. Utilize a função
realloc toda vez que um elemento for inserido no vetor W. Não utilize variáveis globais.*/
void liberar(int *Q,int *R,int *W){
	free(Q);
	free(R);
	free(W);
}
void preencher(int *v,int tam){
	for(int i=0;i<tam;i++){
		v[i]=rand()%30;
	}
}
void exibir(int *v,int tam){
	for(int i=0;i<tam;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}
int confere_repetido(int *W,int tam, int num){
	for(int i=0; i<tam; i++){
		if(W[i]==num){
			return 0;
		}
	}
	return 1;
}
void mostrar(int *v, int cont){
	printf("\n");
	for(int i=0;i<cont;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}
void preencherW(int *Q, int *R, int *W){
	int cont=0,k=0;
	for(int i=0; i<20; i++){
		for(int j=0; j<12; j++){
			//printf("\n%d %d",R[i],Q[j]);
			if(R[i]==Q[j] && confere_repetido(W,cont,R[i])==1){
				cont++;
				W=realloc(W,cont*sizeof(int));
				W[cont-1]=Q[j];				
				//mostrar(W,cont);
				//getchar();
			}
		}
	}
	for(int i=0;i<cont;i++){
		printf("%d ",W[i]);
	}
	printf("\n");
}
int main(){
	srand(1);
	int *Q=malloc(sizeof(int)*12);
	int *R=malloc(sizeof(int)*20);
	preencher(Q,12);
	preencher(R,20);
	exibir(Q,12);
	exibir(R,20);
	int *W=NULL;
	preencherW(Q,R,W);
	liberar(Q,R,W);
}