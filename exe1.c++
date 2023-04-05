#include <iostream>
#include <locale.h>
#include <math.h>

int main () { 
    setlocale(LC_CTYPE, "Portuguese");
    float vht, imp, sb, nht, sr, car, vimp;

    printf("Número de horas trabalhadas: ");
    scanf("%f", &nht);

    printf("Cargo: ");
    scanf("%f", &car);

    if (car == 1) {
        vht = 1500 * 0.02;
    }else if (car ==2) {
        vht = 1800 * 0.02;
    }else {
        vht = 2300 * 0.02;
    }

    sb = nht * vht;

    if (sb <= 1000) {
        vimp = 0.09;
    }else if (sb <= 5000) {
        vimp = 0.10;
    }else {
        vimp = 0.12;
    }

    imp = sb * vimp;
    sr = sb - imp;

    if (car == 1) {
        printf("Cargo Ocupado: Balconista\n");
        printf("Salário Bruto: %.2f\n", sb);
        printf("Imposto Pago: %.2f\n", imp);
        printf("Salário a Receber: %.2f\n", sr);
    }else if (car ==2) {
        printf("Cargo Ocupado: Vendedor\n");
        printf("Salário Bruto: %.2f\n", sb);
        printf("Imposto Pago: %.2f\n", imp);
        printf("Salário a Receber: %.2f\n", sr);
    }else {
        printf("Cargo Ocupado: Gerente\n");
        printf("Salário Bruto: %.2f\n", sb);
        printf("Imposto Pago: %.2f\n", imp);
        printf("Salário a Receber: %.2f\n", sr);
    }



    

}