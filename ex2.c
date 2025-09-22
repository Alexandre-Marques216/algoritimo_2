#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct aluno
    {
        int num_matricula;
        char nome[100];
        float notas[3];
    };
    
    printf("%d",sizeof(struct aluno));
}