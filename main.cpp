#include <iostream>

using namespace std;

int Fibonacci(int n){

    int ii;

    int ValorAnterior_2, ValorAnterior_1, ValorAtual;

    ValorAnterior_1 = 1;
    ValorAnterior_2 = 0;

    if(n==0){
        return 0;
    }

    for(ii=1; ii<n; ii++){
        ValorAtual = ValorAnterior_1 + ValorAnterior_2;

        ValorAnterior_2 = ValorAnterior_1;

        ValorAnterior_1 = ValorAtual;

    }

    return ValorAtual;
}

int main(){

    cout << "Lista 06 - Questao 01 - Letra c" << endl;

    cout << "Insira a posicao que deseja saber" << endl;

    int Posicao;
    cin >> Posicao;

    int Resultado;

    Resultado = Fibonacci(Posicao);

    cout << "Valor total:" << Resultado << endl;

    return 0;
}
