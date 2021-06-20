#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b){//A função comparador() recebe dois números do array e os compara
	return ( *(int*)a - *(int*)b );
}

void cresce(int n, float *vet){
	int i;
	qsort(vet,n,sizeof(float),comparador); //função para ordenar vetor em ordem crescente 
	for(i=0;i<n;i++){                   //para exibir o vetor 
		printf(" %f",vet[i]);
  }
}
int main(){
	int n;
	float *x;
	scanf(" %d",&n);                   //pede um valor pra n
	x=malloc(n*sizeof(float));         //aloca dinâmicamente um array tipo float com n de tamanho 
	for(int i=0;i<n;i++){              //preenchero vetor
	   x[i]=(n+0.2)-i;
	}
	cresce(n,x);                       //faz a chamada da função
	free(x);                           //libera a memória alocada 
	return 0;
}
 

