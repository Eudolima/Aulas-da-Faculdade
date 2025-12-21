#include <stdio.h>



// Função principal
int main(void)
{
    printf("*** CURSO EM C CS 50 HAVARD ***\n\n");

    // Declarando as variáveis
    int num1, num2; 

    // Coletando os dados dos usuários e armazenando nas variáveis
    printf("digite um numero: \n");
    scanf("%d", &num1);
    printf("digite um segundo numero: \n");
    scanf("%d", &num2);

    // Teste condicional
    if (num1 < num2)
    {
        printf("O numero %d é menor que o numero %d\n\n", num1, num2);
    }
    else if (num1 > num2)
    {
        printf("O numero %d é maior que o numero %d", num1, num2);
    }
    else
    {
        printf("O numero %d é igual ao numero %d\n\n", num1, num2);
    }
 printf("\n\n*** FIM DO PROGRAMA ***\n\n");
}