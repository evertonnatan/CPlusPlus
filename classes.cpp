// Introdução às Classes em C++ 
// Exemplo retirado do livro Deitel 5ª edição


// Define a classe GradeBook que contém um membro de dados courseName;
// e funções-membro para configurar e obter seu valor; 
// Cria e manipula um objeto GradeBook com essas funções. 

#include <iostream>
using std::cout;
using std::endl;

#include <string> // o programa utiliza a classe de string padrão do C++
using std::string;
using std::getline;

// Definição da classe GradeBook
class GradeBook
{
    public:
    //função que configura o nome do curso:
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    } //fim da função setCourseName

    // função que obtém o nome do curso:
    string getCourseName()
    {
        return courseName; // retorna o courseName do objeto
    } // fim da função getCourseName

    // função que exibe uma mensagem de boas vindas
    void displayMessage()
    {
        // essa instrução chama getCourseName para obter o nome do curso que esse GradeBook representa
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // fim da função displayMessage
    private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook

