/* Faça um programa que recebe nomes de frutas e seu preço. A quantidade frutas deve ser informada pelo 
o usuário. Utilize alocação dinâmica, especialmente a função REALLOC para não desperdiçar memória. */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int qnt_frutas,linha;
    printf("Digite a quantidade de frutas: ");
    scanf("%d", &qnt_frutas);

    char**frutas=(char**)malloc(qnt_frutas*sizeof(char*));
    if (frutas==NULL){
        printf("Erro de memoria");
        exit(1);
    }
    for (int linha = 0; linha < qnt_frutas; linha++){
        frutas[linha]=(char*)malloc(50*sizeof(char));
    }
    
    float*preco=(float*)malloc(qnt_frutas*sizeof(float));
    if(preco==NULL){
        exit(1);
    }
    printf("Informe as frutas e seu valor: \n");
    for ( linha = 0; linha < qnt_frutas; linha++){
        scanf("%[^\n]s",frutas[linha]);
        scanf("%f",&preco[linha]);
    }
    
    return 0;
}
