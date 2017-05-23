#include<stdio.h>
#define PI 3.14159
#define half 0.5

int main()
{
    double a, b, c, m, tri, ci, tra, qua, re;
    while(scanf("%lf%lf%lf", &a, &b, &c)==3)
    {
        tri=half*(a*c);
        ci=PI*(c*c);
        tra=half*(a+b)*c;
        qua=b*b;
        re = a*b;
        printf("TRIANGULO: %.3lf\n",tri);
        printf("CIRCULO: %.3lf\n",ci);
        printf("TRAPEZIO: %.3lf\n",tra);
        printf("QUADRADO: %.3lf\n",qua);
        printf("RETANGULO: %.3lf\n",re);
    }

    return 0;
}

