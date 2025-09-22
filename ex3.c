#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct cadastro
    {
        char nome[100];
        int idade;
        char endereco;
    };
int alocacao(int n)
{
    if(n < 0)
    {
        printf("valor invalido\n");
    }
    else
    {
        int *p1;
        p1 = malloc(sizeof(n));

        if(p1 == NULL)
        {
            printf("erro na locacao de memoria\n");
            return 1;
        }
        return *p1;
        free(p1);
    }
}

int main()
{
    int numero;
    scanf("%d",&numero);
    alocacao(numero);
}