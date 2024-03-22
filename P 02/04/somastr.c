#include <stdio.h>
int main(){
    int N, soma;
    scanf("%d", &N);
    char str[100];

    for(int i=0; i<N; i++){
        soma=0;
        scanf("%s", str);
        for(int i =0; str[i]!='\0'; i++){

            if(str[i]=='0'|| str[i]=='1'|| str[i]=='2'|| str[i]=='3'|| str[i]=='4'|| str[i]=='5'|| str[i]=='6'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9'){
               soma+=str[i]-48;
            }
        }
        printf("%d\n", soma);
    }
}