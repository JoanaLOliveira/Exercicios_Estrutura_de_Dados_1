/* 1. Crie um tipo estruturado para armazenar dados de um funcionário. Uma estrutura deste tipo possui
os seguintes campos: nome, salário, identificador e cargo. 
a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e preencha seus campos com valores fornecidos pelo usuário via teclado.
b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Funcionario
e imprima os valores dos seus campos
c) Implemente uma função para realizar uma alteração no salário de uma estrutura do tipo Funcionario.
d) Escreva uma função que receba como parâmetro um vetor de estruturas do tipo Funcionario e
imprima o cargo e salário do Funcionario com maior salário e o cargo e salário do funcionário
com o menor salário.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
	char nome[50],carg[50];
	float sal;
	int id;
}Funcionario;
void preencha(Funcionario *preencha, int qtd){
	for(int i = 0; i < qtd; i++){
	printf("Qual é o nome do funcionario: ");
	scanf(" %[^\n]s", preencha[i].nome);
	printf("Qual é o salario do funcionario: ");
	scanf("%f", &preencha[i].sal);
	printf("Qual é o identificador do funcionario: ");
	scanf("%d", &preencha[i].id);
	printf("Qual o cargo do funcionario: ");
	scanf(" %[^\n]s", preencha[i].carg);
    }
}
void men_mai(Funcionario * mem, int qtd){
    float men = 0, mai = 0;
    int ind_mai, ind_men;
	for(int i = 0; i < qtd; i++){
		if(i == 0){
			men = mem[i].sal;
		}
		if(mem[i].sal > mai){
			mai = mem[i].sal;
			ind_mai = i;
		} 
		if(mem[i].sal < men){
			men = mem[i].sal;
			ind_men = i;
		} 
	}
	printf("O funcionario que tem o maior salario e %s, que tem salario de %.1f", mem[ind_mai].nome, mem[ind_mai].sal);
	printf("O funcionario que tem o menor salario e %s, que tem salario de %.1f", mem[ind_men].nome, mem[ind_men].sal);
}
void atualiz (Funcionario * alt, int ind){
	alt[ind].sal += 1000;
}
int main (){
	int quant, index;
	printf("Informe a quantidade de funcionarios: ");
	scanf ("%i", &quant);
	Funcionario * empr = (Funcionario*) malloc (quant*sizeof(Funcionario) );
	if(empr == NULL){
		exit (1);
	}
	preencher(empr, quant);
	altera(empr, 0);
	return 0;
}

Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
