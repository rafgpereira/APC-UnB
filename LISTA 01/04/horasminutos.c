#include <stdio.h>
int main(){

    double H;
    scanf("%lf", &H);
    double M;
    double S;
    
    // H= horas M= minutos S=segundos

    M = H * 60;
    printf("%.0lf\n", M);
    S = H * 3600;
    printf("%.0lf\n", S);
    return 0;
};