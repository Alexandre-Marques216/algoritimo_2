#include <stdio.h>
#include <string.h>
void imprime(char valor[100])
{
    printf("%s",valor[0]);
}
int main()
{
    char carac[10];
    scanf("%s",carac[0]);
    imprime(carac[0]);
}