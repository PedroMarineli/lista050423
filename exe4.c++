#include <cstdio>
#include <iostream>
#include <locale.h>
#include <math.h>

int main (){    
    setlocale(LC_CTYPE, "Portuguese");
    float equip, imp, var;

    printf("[1] Desktop .... 1900,00\n[2] Notebook ... 3600,00\n");
    scanf ("%f", &equip);

    if (equip == 1) {
        equip = 1900;
    }else if (equip == 2) {
        equip = 3600;
    }else {
        equip = 3;
        printf("Opção de Equipamento Incorreto.\n");
    }

    if (equip != 3) {
        printf("[1] MG 10%\n[2] SP 12%\n[3] RJ 15%\n");
        scanf("%f", &imp);
    }

    if (imp == 1 && equip != 3) {
        imp = 0.1;
    }else if (imp == 2 && equip != 3) {
        imp = 0.12;
    }else if (imp == 3 && equip != 3) {
        imp = 0.15;
    }else {
        imp = 4;
    }

    if (imp == 4 && equip != 3) {
        printf("Opção de Estado Incorreto;\n");
    }

    var = equip * imp;
    var = equip + var;

    if (equip != 3 && imp != 4) {
        printf("Valor de Entrega: %.2f\n", var);
}
    }
    