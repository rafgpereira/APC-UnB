#include <stdio.h>
int main(){
    int a=100000, b=100000, c=100000;
    int quant;
    scanf("%d", &quant);
    int num[quant];
    for(int i=0; i<quant; i++){
        scanf("%d", &num[i]);
        if(a>=num[i]){
            c=b;
            b=a;
            a=num[i];
        } else if (b>=num[i]){
            c=b;
            b=num[i];
        } else if (c>=num[i]){
            c= num[i];
        }
    }
    printf("%d\n%d\n", b, c);
    return 0; 

}