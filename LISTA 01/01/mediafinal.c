#include <stdio.h>

 int main(){ 

    double MF; 
    double P1; 
    scanf("%lf", &P1); 
    double P2; 
    scanf("%lf", &P2); 
    double P3; 
    scanf("%lf", &P3); 
    double T; 
    scanf("%lf", &T); 
    double ML; 
    double L1; 
    scanf("%lf", &L1); 
    double L2; 
    scanf("%lf", &L2); 
    double L3; 
    scanf("%lf", &L3); 
    double L4; 
    scanf("%lf", &L4); 
    double L5; 
    scanf("%lf", &L5); 

    ML = (L1 + L2 + L3 + L4 + L5) / 10; 

    MF = (P1 + 2*P2 + 3*P3 + 2*T) / 8 + ML; 
    printf("%.2lf\n", MF); 


    return 0; 
    
    };