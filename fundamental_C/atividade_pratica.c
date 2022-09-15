/*

SEMANA 05 - UNIVESP
Exemplo (Livro: DAMAS, L. Linguagem C. cap. 11, p. 275): Escreva uma função que permita escrever informações de uma pessoa como nome, idade, salário e data de nascimento na tela os valores existentes em uma estrutura recebida como argumento como data de Nascimento composto de dia, mês e ano.


*/

#include <stdio.h>

typedef struct { int Dia, Mes, Ano; }; DATA;

typedef struct pessoa 
{
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;
} PESSOA;

void Ler (PESSOA *ptr)
{
    printf("Qual o Nome     : "); gets ((*ptr).Nome);
    printf("Qual a Idade    : "); scanf("%d",&(*ptr).Idade);
    printf("Qual o Salário    : "); scanf("%f",&(*ptr).Salario);
    printf("Qual a Data Nascim.    : "); scanf("%d %d %d",&(*ptr).Nasc.Mes,&(*ptr).Nasc.Ano);
}

void Mostrar (struct pessoa x)
{
    printf("Nome        : %s\n",x.Nome);
    printf("Idade       : %d\n",x.Idade);
    printf("Salario     : %.2f\n",x.Salario);
    printf("Dt. Nasc        : %d/%d/%d\n",x.Nasc.Dia,x.Nasc.Mes,x.Nasc.Ano);
}

int main()
{
    /* code */
    struct pessoa p = {"Everton", 23, 12345.67,{23,5,1996}};
    
    Mostrar(p);
    puts("\n");
    Ler(&p);
    Mostrar(p);
}
