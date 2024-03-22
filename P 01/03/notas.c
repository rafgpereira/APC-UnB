#include <stdio.h>
int main(){

    int nota;
    scanf("%d", &nota);

    if (nota==0){
        printf("SR\n");
    } else if (1<=nota && nota<=29){
        printf("II\n");
    } else if (30<=nota && nota<=49) {
        printf("MI\n");
    } else if (50<=nota && nota<=69){
        printf("MM\n");
    } else if (70<=nota && nota<=89){
        printf("MS\n");
    } else printf("SS\n");

    return 0;
}