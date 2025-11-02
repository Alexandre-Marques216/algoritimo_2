#include <stdio.h>
int main()
{
    int a,b,c,d,e,contador=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    while(contador <= a || contador <= b || contador <= c || contador <= d || contador <= e)
    {
    if(contador == a)
    printf("%d ",a);
    else if(contador == b)
    printf("%d ",b);
    else if(contador == c)
    printf("%d ",c);
    else if(contador == d)
    printf("%d ",d);
    else if(contador == e)
    printf("%d ",e);
    contador++;
    }
    printf("\n");
    while(contador >= a || contador >= b || contador >= c || contador >= d || contador >= e)
    {
    if(contador == a)
    printf("%d ",a);
    else if(contador == b)
    printf("%d ",b);
    else if(contador == c)
    printf("%d ",c);
    else if(contador == d)
    printf("%d ",d);
    else if(contador == e)
    printf("%d ",e);
    contador--;
    }
    printf("\n");
}