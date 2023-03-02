#include <stdio.h>
int soma(int a, int b){
    return a+b;
}
int calcula(int x, int y, int (*operacao)(int,int)){
    return(*operacao)(x,y);
}
int multiplicacao(int num1, int num2){
    return num1*num2;
}
int main(){
    int resultado=calcula(5,3,multiplicacao);
    printf("Resultado: %d", resultado);
    return 0;
}
