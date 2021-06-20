#include <stdio.h>
#include <stdlib.h>

void cresce (int n, float *vet){
	int i,j,aux;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(vet[i]<vet[j]){
				aux=vet[j];
				vet[j]=vet[i];
				vet[i]=aux;
			}
		}
	}
	for(i=0;i<n;i++){
		 printf(" %f,",vet[i]);
		}
}

int main(void){
	float *x;
	int n;
	scanf("%d",&n);
	x=malloc(n*sizeof(float));
	for(int i=0;i<n;i++){
	x[i]=(n+0.4)-i;
	}
	cresce(n,x);
	return 0;
}
