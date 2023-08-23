#include<stdio.h>

typedef struct 
{
    int dia, ano;
    char *mes[12];

}t_data;

typedef struct 
{
    char nome[100];
    char genero;
    t_data data_nasc;

}t_pessoa;

int main (void)
{
    printf("Hello World");
    t_pessoa joao =
    {
        .nome = "Joao Joze",
        .genero = "H",
        .data_nasc.dia = 01,
        .data_nasc.mes = "Março",
        .data_nasc.ano = 2000

    };

    t_pessoa mario =
    {
        "Mario"
        "h"

    };

    printf("Nome: %c, %c", t_pessoa.nome);
}

