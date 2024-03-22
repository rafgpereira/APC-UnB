//Nesta primeira função, são coletados dados de tempo e distâcnia, e a função deve retornar a velocidade média.
double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double tempo;

    tempo= tB-tA;

    return distancia/(tempo/3600);

}
//Esta segunda função trabalha com os dados da primeira. Ela coleta a velocidade máxima da via e utilizando o retorno da função anterior, verifica se a velocidade média foi superior ou inferior à maxima permitida.
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){

    if(calculaVelocidadeMedia(tA, tB, distancia)>velocidadeMaxima){
        return 1;
    } else{
        return 0;
    }
}