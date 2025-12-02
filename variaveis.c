#include <stdio.h>

int main(){

    //caracteres
    char nome_da_variavel = 'a';
    printf("imprimindo a variavel do tipo char: %c\n", nome_da_variavel);

    //numeros inteiros
    int nome_da_variavel2 = 1;
    printf("imprimindo a variavel do tipo inteiro: %d\n", nome_da_variavel2);

    //numeros reais
    float numero_da_variavel3 = 1;
    printf("imprimindo a variavel do tipo float: %2.f\n", numero_da_variavel3);

    //constante nomeada
    const int MAX = 100;
    printf("imprimindo a variavel constante: %d\n", MAX);

    //demosntração de uso de strings
    char nome[] = "Caio";
    printf("impressão de string: %s\n", nome);
    

     return 0;
}