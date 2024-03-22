#include <stdio.h>
int main(){

    char tipo1, tipo2, tipo3;
    double B, b, h, soma1, soma2, soma3, soma4;
    
    scanf("%c %c %c", &tipo1, &tipo2, &tipo3);
    scanf("%lf %lf %lf", &B, &b, &h);

    soma1= (B*h/2) + (B*h) + (B*B); //abc  

    soma2= (B*h/2) + (B*h) + ((B+b)*h/2); //abd 

    soma3= (B*h/2) + (B*B) + ((B+b)*h/2); //acd  

    soma4= (B*h) + (B*B) + ((B+b)*h/2); //bcd 


    if ((tipo1=='A' && tipo2=='B' && tipo3=='C') || (tipo1=='B' && tipo2=='A' && tipo3=='C') || (tipo1=='C' && tipo2=='B' && tipo3=='A') || (tipo1=='A' && tipo2=='C' && tipo3=='B') || (tipo1=='B' && tipo2=='C' && tipo3=='A') || (tipo1=='C' && tipo2=='A' && tipo3=='B')) {

        printf("%.2lf", soma1);

    } else if ((tipo1=='A' && tipo2=='B' && tipo3=='D') || (tipo1=='A' && tipo2=='D' && tipo3=='B') || (tipo1=='B' && tipo2=='D' && tipo3=='A') || (tipo1=='B' && tipo2=='A' && tipo3=='D') || (tipo1=='D' && tipo2=='B' && tipo3=='A') || (tipo1=='D' && tipo2=='A' && tipo3=='B')) {

        printf("%.2lf", soma2);

    } else if ((tipo1=='A' && tipo2=='C' && tipo3=='D') || (tipo1=='A' && tipo2=='D' && tipo3=='C') || (tipo1=='C' && tipo2=='D' && tipo3=='A') || (tipo1=='C' && tipo2=='A' && tipo3=='D') || (tipo1=='D' && tipo2=='C' && tipo3=='A') || (tipo1=='D' && tipo2=='A' && tipo3=='C')) {

        printf("%.2lf", soma3);

    } else if ((tipo1=='B' && tipo2=='C' && tipo3=='D') || (tipo1=='B' && tipo2=='D' && tipo3=='C') || (tipo1=='C' && tipo2=='D' && tipo3=='B') || (tipo1=='C' && tipo2=='B' && tipo3=='D') || (tipo1=='D' && tipo2=='B' && tipo3=='C') || (tipo1=='D' && tipo2=='C' && tipo3=='B')) {

        printf("%.2lf", soma4);

    }

    return 0;


}