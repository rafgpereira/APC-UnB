#include <stdio.h>
#include <ctype.h>
int main(){
    char nome[100], nome1[100], nome2[100];
    int i, a, b;
    scanf("%[^\n]s", nome);
    for(i=0; nome[i]!=' '; i++){
        nome1[i] = tolower(nome[i]);
    }
    nome1[i]='\0';
    printf("%s.", nome1);


    for(i=0; nome[i]!='\0'; i++){
        if(nome[i]==' '){
            a=i+1;
        }
    }
    for(b=0;a!=i; a++){
        nome2[b]=tolower(nome[a]);
        b++;
    }
    nome2[b]='\0';
    printf("%s@unb.br\n", nome2);
    return 0;
}
