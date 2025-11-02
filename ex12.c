#include <stdio.h>
void ordem_crescente(int valor1,int valor2,int valor3)
{
    for(int i=0;i<=valor1 || i<=valor2 || i<=valor3;i++ )
    {
        if(i==valor1)
            printf(" %d",valor1);
        else if(i==valor2)
            printf(" %d",valor2);
        else if(i==valor3)
            printf(" %d",valor3);
    }
}
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    ordem_crescente(a,b,c);

}
