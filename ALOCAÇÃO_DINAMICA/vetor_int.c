/* aloque dinamicamente um vetor de inteiros de tamanho 10 e preencha cada elemento 
do vetor com o seu respectivo índice (vetor[i]=i). Em seguinda, imprima o vetor. */

#include<stdio.h>
#include<stdlib.h>
int main(void){
    int tamanho=10;
    int i;
    int *vetor=(int*)malloc(tamanho*sizeof(int));
    if (vetor==NULL){
        printf("Erro ao alocar memória");
        exit (1);
    }
    for (int  i = 0; i < tamanho; i++){
        vetor[i]=i;
    }

    //Imprimir vetor
    for (int i = 0; i < tamanho; i++){
        printf("%d\t",vetor[i]);
    }
    
    free(vetor);
    return 0;
}
