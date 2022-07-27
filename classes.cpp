// Introdução às Classes em C++ 
// Exemplo retirado do livro Deitel 5ª edição


// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage

#include <iostream>
using std::cout;
using std::endl;

// Definição da classe GradeBook
class GradeBook
{
    public:
    //função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage()
    {
        cout <<"Bem-vindo ao Grade Book!" << endl;
    } //fim da função displayMessage
}; //fim da classe GradeBook (a definição de classe termina com ponto e vírgula)

// a função main inicia a execução do programa
int main()
{
    GradeBook myGradeBook; //cria um objeto GradeBook chamado "myGradeBook"
    myGradeBook.displayMessage(); //chama a função displayMessage do objeto
    return 0; //indica terminação bem sucedida
} // fim de main