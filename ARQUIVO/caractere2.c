#include<stdio.h>
#include<ctype.h> /* função toupper */

int main(void){
    int c;
    char entrada[121]; /* armazena nome do arquivo de entrada */
    char saida[121]; /* armazena nome do arquivo de saída */
    FILE*e; /* ponteiro do arquivo de entrada */
    FILE*s; /* ponteiro do arquivo de saída */

    /* pede ao usuário os nomes dos arquivos */
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%120s",entrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%120s",saida);
    
    /* Abre arquivos para leitura e para escrita */
    e=fopen(entrada,"rt");
    if (e==NULL){
        printf("Nao foi possivel abrir arquivo de entrada.\n");
        return 1;
    }
    s=fopen(saida,"wt");
    if (s==NULL){
        printf("Nao foi possivel abrir arquivo de saida.\n");
        fclose(e);
        return 1;
    }
    /* lê da entrada e escreve na saída */
    while ((c=fgetc(e))!= EOF){
        fputc(toupper(c),s);
    }
    /* fecha arquivos */
    fclose(e);
    fclose(s);

    return 0;
    
}
