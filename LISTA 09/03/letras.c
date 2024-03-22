#include <stdio.h>
int main(){
    char a,frase[1001];
    int i,j;
    double x=0,y=0;
    scanf("%c\n",&a);
    gets(frase);
    for(i=0;frase[i]!='\0';i++){
        for(;frase[i]!=' '&&frase[i]!='\0';i++){
            if(a==frase[i]){
                j=1;
            }
        }
        if(j==1){
            y++;
        }
        j=0;
        x++;
        if(frase[i]=='\0'){
            i--;
        }
    }
    y=100*y/x;
    printf("%.1lf",y);
    return 0;
}