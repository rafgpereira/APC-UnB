#include <stdio.h>
int main(){
    char entrada[100], risada[100], reverse[100];
    int i, a, b=0, x=0, y=0;
    scanf("%s", entrada);
    for(i=0; entrada[i]!='\0'; i++){
        if(entrada[i]=='a'||entrada[i]=='e'||entrada[i]=='i'||entrada[i]=='o'||entrada[i]=='u'){
            risada[x]=entrada[i];
            x++;
        }
    }
    risada[x]='\0';

    for(a=x-1; a>=0; a--){
        reverse[b]=risada[a];
        b++;
    }
    reverse[b]='\0';

    for(i=0; risada[i]!='\0';i++){
        if(risada[i]==reverse[i]){
            y++;
        }
    }
    
    if(x==0){
        printf("Valor invalido!\n");
    } else if (y==x){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;

}