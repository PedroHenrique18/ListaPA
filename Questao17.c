include <stdio.h>
#include <stdlib.h>

void soma(int *v1,int n,int *v2, int *v3){
     for(int i=0;i<n;i++){
     v3[i]=v1[i]+v2[i];
     }
}

int main(){
    int n,cont=1;
    char a,b,c;
    printf("Digite o nome dos vetor : ");
    scanf("%c%c%c", &a,&b,&c);
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v1[n],v2[n],v3[n];
    for(int i=0;i<n;i++){
        printf("Digite valores do vetor %c: ", a);
        cont++;
        scanf(" %d", &v1[i]);
        printf("Digite valores do vetor %c: ", b);
        scanf(" %d", &v2[i]);
        cont++;
        if(cont>=2){
            cont=1;
        }
    }
    soma(v1,n,v2,v3);
    for(int i=0;i<n;i++){
        printf(" %d",v3[i]);
    }
    return 0;
}
