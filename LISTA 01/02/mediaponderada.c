#include <stdio.h>
int main(){

    double MP;
    scanf("%lf", &MP);
    double N2; 
    scanf("%lf", &N2); 
    double P1, P2; 
    scanf("%lf", &P1), scanf("%lf", &P2); 
    double N1;
    
    //MP= média ponderada / N2= nota 2 / P1 e P2= peso 1 e 2 / N1= nota 1, que é o que deve ser calculado

    N1 = MP + P2 / P1 * (MP - N2);

    //A equação foi manipulada para isolar a N1

    printf ("%lf\n", N1);
    return 0;
};