#include <stdio.h>
#include <string.h>
int main()
{
    struct aluno
    {
        char nome[100];
        int idade;
        char endereco[100];
    };
    struct aluno aluno1;
    strcpy(aluno1.nome , "alexandre Marques");
    aluno1.idade = 19;
    strcpy(aluno1.endereco , "R. Angelo Melao, 790");
    printf("%s",aluno1.nome);
    printf("%d",aluno1.idade);
    printf("%s",aluno1.endereco);
}