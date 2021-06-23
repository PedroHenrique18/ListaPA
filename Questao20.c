#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gc.h>

void mal(int n, int *p){
   for(int i=0;i<n;i++){
       p = malloc(sizeof(int));
       free(p);
   }

}

void gc_mal(int n, int *p){
    for(int i=0;i<n;i++){
       p = GC_MALLOC(sizeof(int));
    }


}

int main(){

    clock_t t1, t2;
    int n=100000;
    int *p;
    t1=clock();
    mal(n,p);
    t1=clock()-t1;
    t2=clock();
    gc_mal(n,p);
    t2=clock()-t2;
    printf(" tempo de execucao %f milisegundos", ((double)t1)/((CLOCKS_PER_SEC/1000)));
    printf(" tempo de execucao %f milisegundos", ((double)t2)/((CLOCKS_PER_SEC/1000)));


}

//tempo de execucao 12.960000 milisegundos 
//tempo de execucao 19.625000 milisegundos
//como podemos notar se for executado de forma manual (malloc/free) é mais rapido do que com o coletor de lixo (GC_MALLLOC)
