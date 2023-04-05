#include <iostream>
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_CTYPE, "Portuguese");
    float lab, ava, exa, med;

    printf("Laboratório: ");
    scanf("%f", &lab);
    printf("Avaliação: ");
    scanf("%f", &ava);
    printf("Exame: ");
    scanf("%f", &exa);

    med = (lab*3 + ava*4 + exa*3) / 10;

    if (lab < 0 || ava < 0 || exa < 0) {
     printf("Erro: Entrada de dados\n");
    } else if (med <= 2.9 && med > 0) {
        printf("Média: %.2f\n", med);
        printf("Situação: Reprovado");
    }else if (med <= 4.9) {
        printf("Média: %.2f\n", med);
        printf("Situação: Recuperação\n");
    }else {
        printf("Média: %.2f\n", med);
        printf("Situação: Aprovado\n");
    }
}