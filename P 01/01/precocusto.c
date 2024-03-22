#include <stdio.h>
int main(){

    double precofinal, lucro, imposto, custo;
    scanf("%lf %lf %lf", &precofinal, &lucro, &imposto);

    custo = precofinal/(1+(lucro/100)+(imposto/100));

    printf("%lf\n", custo);
    return 0;
}