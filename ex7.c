#include <stdio.h>
int main()
{
    int n,soma=0,media=0,contador=0;
    scanf("%d",&n);
    int idade[n];
    for(int i=0; i<n;i++)
        scanf("%d",&idade[i]);
    for(int i=0; i<n;i++)
        if(idade[i]>18)
        {
            soma = soma + idade[i];
        }
        else
        {
            media = media + idade[i];
            contador++;
        }
}