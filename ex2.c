#include <stdio.h>
int main()
{
    int dia,mes,ano;
    scanf("%d/%d/%d",&dia,&mes,&ano);
    if(dia>31 || dia<0)
    printf("dia invalido");
    else if(mes>12 || mes<0)
    printf("mes invalido");
    else if(ano>2025)
    printf("ano invalido");
    else
    printf("data valida");


}