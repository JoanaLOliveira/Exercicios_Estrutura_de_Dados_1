#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE*fp=fopen("entrada.txt","w");
    if (fp==NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado!");
    }
    int valor = fclose(fp);
    if (valor!=0){
        printf("Nao foi possivel fechar o arquivo \n");
    }
    else{
        printf("arquivo fechado com sucesso! Parabens!");
    }
    
}
