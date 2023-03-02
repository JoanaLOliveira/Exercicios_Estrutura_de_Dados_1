/* aloque dinamicamente uma matriz de inteiros 3x3 e preencha cada elemento da matriz com o seu 
respectivo índice (matriz[i][j]=i*3+j). em seguida, imprima a matriz */

#include <stdio.h>
#include <stdlib.h>

int**criaMatrizInt(int linhas, int colunas){
    int**matriz = (int**) malloc(linhas*sizeof(int*));
    int linha;
    for ( linha = 0; linha < linhas; linha++){
        matriz[linha]=(int*)malloc(colunas*sizeof(int));
    }
    return matriz;
}

int main(void){
    //Aloca uma matriz 2X2
    int linhas=2;
    int colunas=2;
    int ** matriz = criaMatrizInt(3,3);
    //Preenchendo a matriz
    int i,j;
    printf("Digite os valores para matriz: \n");
    for (int  i = 0; i<linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j]=i*3+j;
        }
    }
    //Liberar a matriz
    for (int linha = 0; linha < linhas; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    return 0;
}
