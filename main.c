#include <stdio.h>

void main() {

    int idade;
    float altura;
    char letra;

    printf("qual a sua idade?\n");
    scanf(" %i", &idade);
    printf("qual a sua altura?\n");
    scanf(" %f", &altura);
    printf("qual a sua letra?\n");
    scanf(" %c", &letra);

    printf("A sua idade é %i, vc tem %f de altura e sua letra favorita é %c de gato.", idade, altura, letra);


    return 0;
}