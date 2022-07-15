#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 10, b = 5;
    int soma = a + b;
    cout << "Soma: " << soma << endl;

    int sub = a - b;
    cout << "Subtracao: " << sub << endl;

    int mult = a * b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a / b; 
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv = a % b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a, b); 
    cout << "Potencia: " << pot << endl;

    // Incremento e Decremento:

    cout << "a antigo: " << a << endl;
    //a = a + 1; //1ª forma de declaração
    //a+=1; //2ª forma de declaração
    //a++; //3ª forma de declaração
    //a = a - 1; //1ª forma de declaração
    //a-=1; //2ª forma de declaração
    //a--; //3ª forma de declaração
    
    //É possível usar, também, o operador de multiplicação:
    a *= 3;
    


    cout << "a novo: " << a << endl;
    return 0; 

}

//Referência: https://cplusplus.com/reference/cmath/