/* 2. Crie um tipo estruturado para armazenar dados de uma pessoa. Uma estrutura deste tipo possui os
seguintes campos: nome da pessoa, numero do documento e idade.
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e
preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Pessoa e
imprima os valores dos seus campos.
c) Implemente uma função para realizar uma atualização da idade de uma estrutura do tipo Pessoa.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Pessoa e imprima
o nome da Pessoa mais velha e mais nova. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome[80];
    int doc;
    int ida;
} Pessoa;

void preenche(Pessoa *i){
    int d;
    for (d = 0; d < 4; d++){
        printf("\n");
        printf("\nDados da pessoa (%d)\n\n", d + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", i[d].nome);
        printf("Digite o numero do documento: ");
        scanf("%d", &i[d].doc);
        printf("Digite a idade: ");
        scanf("%d", &i[d].ida);
    }
}

void imprimir(Pessoa *i){
    int n;
    for (i = 0; i < 4; i++)
    {

        printf("\n");
        printf("\nDados da pessoa (%d)\n\n", n + 1);
        printf("nome do funcionario: %s\n", i[n].nome);
        printf("Numero do documento: %d\n", i[n].doc);
        printf("Idade da pessoa: %d\n", i[n].ida);
    }
}

void atualidade(Pessoa *i, int val){
    int a;
    for (a = 0; a < 4; a++){
        if (val == i[a].doc)
            printf("Atualize a idade da pessoa: ");
        scanf("%d", &i[a].ida);
    }
}

void mai_men(Pessoa *i){
    int men = i[0].ida;
    int mai = i[0].ida;
    char nomemai[100];
    char nomemen[100];
    strcpy(nomemai, i[0].nome);
    strcpy(nomemen, i[0].nome);
    for (int m = 1; m < 4; m++){
        if (i[m].ida > mai){
            strcpy(nomemai, i[m].nome);
            mai = i[m].ida;
        }
        if (i[m].ida < men){
            strcpy(nomemen, i[m].nome);
            men = i[m].ida;
        }
    }
    printf("Pessoa mais velha encontrada idade: %d nome: %s\n", mai, nomemai);
    printf("Pessoa mais nova encontrada idade: %d nome: %s\n", men, nomemen);
}

int main(void)
{
    Pessoa *p1 = (Pessoa *)malloc(4 * sizeof(Pessoa));
    int p2;
    int val;
    preenche(p1);
    imprimir(p1);
    printf("\n");
    printf("Quer alterar a idade de alguem ? (1) Sim ou (2) Nao\n");
    scanf("%d", &p2);
    if (p2 == 1){
        printf("Qual o numero do documento: ");
        scanf("%d", &val);
        alteraidade(p1, val);
        printf("\n");
        imprimir(p1);
    }
    printf("\n");
    maimen(p1);
    return 0;
}
