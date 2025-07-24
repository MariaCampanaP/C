#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;
    x = 5;
    y = 2 * x;
    printf("%d\n", x);
    printf("%d\n", y);

    int w;
    double z;
    w = 5;
    z = 2 * w;
    printf("%d\n", w);
    printf("%.1lf\n", z);

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    printf("%d\n", resultado);

    double c;
    int d;
    c = 5.0;
    d = (int) c;
    printf("%d\n", d);

    /*(int) em C - Conversão de Tipo (Type Cast)
    > Em C, (int) é usado para fazer uma conversão de tipo explícita, chamada de type cast.
    > Serve para transformar um valor de outro tipo (como double) em inteiro (int)
    > A parte decimal é descartada, sem arredondar.*/
}
