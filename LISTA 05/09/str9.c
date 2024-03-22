#include <stdio.h>
int main(){
    int N, i, x;
    char frase[1000], cripto[1000];

    scanf("%d\n", &N);
    for( x=0; x<N; x++){
        fgets(frase, 1000, stdin);
        for( i=0; frase[i]!='\0'; i++){
            if(frase[i]>=65 && frase[i]<=77){
            cripto[i]=frase[i]+13;
            } else if(frase[i]>=78 && frase[i]<=90){
                cripto[i]=frase[i]-13;
            } else{
                cripto[i]=frase[i];
            }
        }
        cripto[i]='\0';
        printf("%s\n", cripto);
    }
    return 0;

}