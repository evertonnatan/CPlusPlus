#include <iostream>

using namespace std;

int main()

{
    int inteiro;
    inteiro = 5; 
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real_2;
    real = 5.2e99;
    cout << real_2 << endl;

    bool booleano;
    booleano = false; //Se for "true" retornará 1; se for "false", retornará 0
    cout << booleano << endl;

    char letra;
    letra = 'n'; //No caso do char, deve-se declarar a variável com aspas simples
    cout << letra << endl;

    string palavra;
    palavra = "bola"; //No caso de strings, deve-se declarar usando aspas duplas
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade?" << endl;
    cin >> idade;
    cout << "Idade: " << idade << endl;

}