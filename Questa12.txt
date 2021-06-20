
// O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução, qual função será executada, 
sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código


#include <stdio.h>

int menor(int a,int b){
   if(a>b){
      return a;
   }else{
        return b;
    }
   return 0;
}

int main(){
    int (*pxfunc)(int,int);
    int x;
    pxfunc=menor;
    x=pxfunc(3,8);
    printf(" %d", x);
}
