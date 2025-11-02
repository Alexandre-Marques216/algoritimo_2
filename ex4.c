#include <stdio.h>
#include <math.h>
int main()
{
    struct ponto
    {
        float x,y;
    };
    struct retangulo
    {  
        struct ponto ponto1;
        struct ponto ponto2;
    };
    float base,altura,area,perimetro,diagonal;
    struct retangulo retangulo1;
    scanf("%f",retangulo1.ponto1.x);
    scanf("%f",retangulo1.ponto1.y);
    scanf("%f",retangulo1.ponto2.x);
    scanf("%f",retangulo1.ponto2.y);
    base = retangulo1.ponto1.x -retangulo1.ponto2.x;
    if(base<0)
    base = base * -1;
    altura = retangulo1.ponto1.y - retangulo1.ponto2.y;
    if(altura< 0)
    altura = altura * -1;
    area = base * altura;
    perimetro = (base*2) + (altura*2);
    diagonal = sqrt((pow(base,2) + pow(altura,2)));
    printf("area:%.2f\nperimetro:%.2f\ndiagonal:%.2f\n",area,perimetro,diagonal);
}