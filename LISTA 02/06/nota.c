#include <stdio.h>
int main(){

    int cima, baixo;
    scanf("%d %d", &cima, &baixo);

    int eduardo, daiane;

    eduardo = (cima + baixo) * 70 / 2;
    daiane = 11200 - eduardo;

    if (eduardo==daiane){
        printf("0\n");
    } else if (eduardo > daiane){
        printf("1\n");
    } else printf("2\n");

    return 0;
}