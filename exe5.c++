#include <cstdio>
#include <iostream>
#include <locale.h>
#include <math.h>

int main () {
    float h, peso, pesoid, dif;
    char sexo;

    printf("Altura: ");
    scanf("%f", &h);
    printf("Sexo: ");
    scanf("%s", &sexo);
    printf("Peso Atual: ");
    scanf("%f", &peso);

    if (sexo == 'F') {
        pesoid = (62.1 * h) - 44.7;
        printf("Peso ideal Mulher: %.2f\n", pesoid);
    }else {
        pesoid = (72.7 * h) - 58;
        printf("Peso ideal Homem: %.2f\n", pesoid);
    }

    dif = peso - pesoid;

    if (dif > 0) {
        printf("Emagrecer(%): %.2f", dif);
    }else {
        printf("Engodar(%): %.2f", dif*-1);
    }


}