#include <stdio.h>
#include <stdlib.h>

float**criaMatrizFloat(int linhas, int colunas){
    float**matriz = (float**) malloc(linhas*sizeof(float*));
    int linha;
    for ( linha = 0; linha < linhas; linha++){
        matriz[linha]=(float*)malloc(colunas*sizeof(float));
    }
    return matriz;
}

int main(void){
    //Aloca uma matriz 2X2
    int linhas=2;
    int colunas=2;
    float ** matriz = criaMatrizFloat(2,2);
    //Preenchendo a matriz
    int i,j;
    printf("Digite os valores para matriz: \n");
    for (int  i = 0; i<linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%f",&matriz[i][j]);
        }
    }
    //Liberar a matriz
    for (int linha = 0; linha < linhas; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    return 0;
}
