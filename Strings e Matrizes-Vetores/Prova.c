#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tamc(int A[]){
	int cont=0;
	for(int i=0;i<10;i++){
		if(A[i]%2==0)
			cont++;
	}
	return cont;
}
int tamd(int A[]){
	int cont=0;
	for(int i=0;i<10;i++){
		if(A[i]%2==1)
			cont++;
	}
	return cont;
}

int F(int A[],int B[],int C[],int D[]){
	int cont=0,soma=0,k=0;
	for(int j=0;j<5;j++){
				soma=soma+B[j];
		}
	for(int i=0,j=0;i<10;i++){
		if(A[i]%2==0){
			C[j]=A[i]+soma;
			j++;
		}
	}

	for(int i=0;i<10;i++){
		cont=0;
		if(A[i]%2!=0){
			for(int j=0;j<5;j++){
				if(A[i]%B[j]==0){
					cont++;
				}
			}
			D[k]=cont;
			k++;
		}	
	}
}
int main(){
	srand(time(0));
	int A[10],B[5];
	int C[tamc(A)],D[tamd(A)];
	for(int i=0;i<10;i++){
		A[i]=rand()%20;
		if(i<5){
			B[i]=1+rand()%20;
		}
	}
	F(A,B,C,D);
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++){
		printf("%d ",B[i]);
	}
	printf("\n %d\n",tamc(A));
	for(int i=0;i<tamc(A);i++){
		printf("%d ",C[i]);
	}
	printf("\n %d\n",tamd(A));
	for(int i=0;i<tamd(A);i++){
		printf("%d ",D[i]);
	}
}