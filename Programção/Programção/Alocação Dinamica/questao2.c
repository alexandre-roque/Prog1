#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencherexibir(int v[], int tam, int n){
	for(int i=tam;i<tam+n;i++){
		v[i]=rand()%101;

	}
	for(int i=0;i<tam+n;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}


int main(){
	srand(time(0));
	int valor,valor2;
	printf("Digite um valor");
	scanf("%d",&valor);
	int *v=(int*) malloc(valor*sizeof(int));
	preencherexibir(v,0,valor);
	while(valor2!=0){
		valor2=1;
		printf("Digite quantos elementos a mais:");
		scanf("%d",&valor2);
		v = realloc(v, (valor+valor2)*sizeof(int));
		preencherexibir(v,valor,valor2);
		valor=valor+valor2;
	}
	printf("\nO vetor final é:\n");
	for(int i=0;i<valor;i++){
		printf("%d ",v[i]);
	}
	printf("\n");
	free(v);
}