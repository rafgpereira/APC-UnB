#include <stdio.h>
int main(){
    char resp[4];
    int a=0,b=0,c=0;
    while(scanf("%s",resp)!=EOF){
        if(resp[0]=='s'){
            b++;
        }
        c++;
        if(c==10&&b>1){
            a++;
            c=0;
            b=0;
        }
        else if(c==10){
            c=0;
            b=0;
        }
    }
    printf("%d\n",a);
    return 0;
}