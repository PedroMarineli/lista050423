#include <cstdio>
#include <iostream>
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_CTYPE, "Portuguese");
    float a, b, c, pri, seg, ter, med, medg, area;
    printf("Digite 3 números: ");
    scanf("%f %f %f", &a, &b, &c );

    if (a > b && a > c) {
        pri = a;
        if (b > c) {
            seg = b;
            ter = c;
        } else {
            seg = c;
            ter = b;
        }
    }else if (b >a && b >c) {
        pri = b;
        if(c > a){
            seg = c;
            ter = a;
        }else{
            seg = a;
            ter = c;
        }
    }else if (c > a && c > b){
        pri = c;
        if (b > a) {
            seg = b;
            ter = a;
        }else{
            seg = a;
            ter = b;
        }
    }

    med = (a + b + c) / pri;
    medg = pow (a*b*c, 1.0/3.0);
    area = 3.141592653 * (ter * ter);

    printf("Crescente: %.0f %.0f %.0f\n", ter, seg, pri);
    printf("Média: %.4f\n", med);
    printf("Média Geométrica: %.4f\n", medg);
    printf("Área: %.5f\n", area);



}