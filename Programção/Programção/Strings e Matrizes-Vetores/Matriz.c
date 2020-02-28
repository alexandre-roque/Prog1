void preenchermanual(int v[]){
	for(int i=0;i<tam;i++){
		printf("Digite os termos do vetor:");
		scanf("%d",&v[i]);
	}
	printf("\n");
}

int compara(int v1[],int tam1, int v2[],int tam2){
	int cont=0,cont2=0;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(v1[i]==v2[j])
				cont++;
		}
		for(int j=0;j<tam;j++){
			if(v1[j]==v2[i])
				cont2++;
		}
	}
	if(cont==tam1 && cont2==tam1)
		return 1;
	else
		return 0;
}