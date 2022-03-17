#include <stdio.h>

int main( ){
    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o valor do primeiro inteiro: \n");
    scanf("%d", &inteiro1);

    printf("Digite o valor do segundo inteiro: \n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("A soma é %d\n", soma);

    return 0;
}