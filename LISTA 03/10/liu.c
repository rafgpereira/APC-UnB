#include <stdio.h>
#include <math.h>
int main(){
    int golpe;
    unsigned long int tempo, raiz;
    scanf("%lu %d", &tempo, &golpe);
    raiz = sqrt(tempo);
    for (int i=0; i<golpe; i++){
        if(raiz%2!=0){
            raiz= (raiz*2)-1;
        } else{
            raiz--;
        }
        tempo= raiz*raiz;
        printf("%lu\n", tempo);
    }
    return 0;

}
