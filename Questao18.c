#include <stdio.h>
#include <stdlib.h>

void mult_matri(int **a,int **b,int **c,int nl,int nc,int n){
    int i,j,k,soma=0;
     for (int i=0;i<nl;i++){
        for(int j=0;j<nc;j++){
            for(int k=0;k<n;k++){
                soma=soma+(a[i][k]*b[k][j]);
            }
            c[i][j]=soma;
            soma=0;
        }

    }
}


int main()
{
    int col_a,lin_a,col_b,lin_b,col_c,lin_c,n;
    printf("numero de colunas de A: ");
    scanf(" %d", &col_a);
    printf("numero de linhas de A:  ");
    scanf(" %d", &lin_a);
    printf("numero de colunas de B: ");
    scanf(" %d", &col_b);
    lin_b=col_a;
    lin_c=lin_a;
    col_c=col_b;
    n=lin_b;
    int **a,**b,**c;
    a = malloc(lin_a*sizeof(int*));
    a[0] = malloc(lin_a*col_a*sizeof(int));
    for(int i=1; i<lin_a; i++)
    {
        a[i]=a[i-1]+col_a;
    }
    b = malloc (lin_b*sizeof(int*));
    b[0] = malloc (lin_b*col_b*sizeof(int));
    for(int i=1; i<lin_b; i++)
    {
        b[i]=b[i-1]+col_b;
    }
    printf("Agora preencha a matriz A:\n");
    for(int i=0; i<lin_a; i++)
    {
        for(int j=0; j<col_a; j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }
    for(int i=0; i<lin_b; i++)
    {
        for(int j=0; j<col_b; j++)
        {
            scanf(" %d",&b[i][j]);
        }
    }
    printf("Resultado da multiplicacao de matrizes:\n");
    c = malloc(lin_c*sizeof(int*));
    c[0] = malloc(lin_c*col_c*sizeof(int));
    for(int i=1; i<lin_c; i++)
    {
        c[i]=c[i-1]+col_c;
    }

    mult_matri(a,b,c,lin_c,col_c,n);
    for(int i=0;i<lin_c;i++){
          for(int j=0;j<lin_b;j++){
                   printf(" %d",c[i][j]);
         }
            printf("\n");

    }

    free(c[0]);
    free(c);
    free(b[0]);
    free(b);
    free(a[0]);
    free(a);

}
