#include <stdio.h>
int main()
{
    int vetor[10];
    for(int i = 0; i<10;i++)
        scanf("%d",&vetor[i]);
    for(int i = 0; i<10;i++)
    {
        if(vetor[i]>25 && vetor[i]<85)
        printf("%d pertence ao intervalo\n",vetor[i]);
    }
}