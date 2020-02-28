#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criar_vetor(int *tam){
	int n;
	printf("Digite um número n:");
	scanf("%d",&n);
	int *v = malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		v[i]=rand()%101;
	}
	*tam=n;
	printf("%d ",*tam);
	return v;
}

void exibir_vetor(int *v,int *tam){
	for(int i=0;i<*tam;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}

void liberar_vetor(int *v){
	
		free(v);
	
}

int main(){
	int *tam;
	srand(time(0));
	int *v=criar_vetor(tam);
	exibir_vetor(v,tam);
	liberar_vetor(v);
}