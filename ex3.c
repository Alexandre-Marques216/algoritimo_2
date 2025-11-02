#include <stdio.h>
int main()
{
    int n,res=1,aux=0;
    scanf("%d",&n);
    aux = n;
    for(int i=0;i<aux;i++)
    {
        res = res * n;
        n--;
    }
    printf("o fatorial de %d e:%d\n",aux,res);
}