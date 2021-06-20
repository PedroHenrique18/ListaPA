#include <stdio.h>
#include <stdlib.h>

void comp(float *a, float *b){
	int aux;
	if(a>b){
		aux=*b;
    *b=*a;
    *a=aux;
		}
	}

void Qsort(int n,float *vet,void (*comp)(float *,float *)){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			comp(&vet[i],&vet[j]);
		}
	}
	for(int i=0;i<n;i++){
		printf(" %f",vet[i]);
		}
}

int main() {
	int n;
	float *x;
	scanf(" %d",&n);
	x=malloc(n*sizeof(float));
	for(int i=0;i<n;i++){
	   x[i]=(n+0.2)-i;
	}
	Qsort(n,x,comp);
	free(x);
	return 0;
}
