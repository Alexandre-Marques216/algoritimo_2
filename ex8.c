#include <stdio.h>
void vetor_valor(int valor1[0],int valor)
{
    int *p1,*p2;
    p1 = &valor;
    p2 = &valor1[0];
    while (*p1 != '\0')
    {
        *p1 = *p2;
        p2++;
    }
}
int main()
{
    int vetor[5],valor;
    scanf("%d",&valor);
    vetor_valor(vetor[0],valor);
}