#include <stdio.h>

int cuadrado(int num);
void cuadra(int *num);
void funcion_3(int *var);
void Invertir(int *a,int *b);
void orden(int *a, int *b);

int main (){

    int num = 5, resultado, num_2 = 7, num_3 = 17;
    int *p_num_2, *p_num_3;

    p_num_2 = &num_2;
    p_num_3 = &num_3;

    printf("PUNTO A \n");
    resultado = cuadrado(num);
    printf("el cuadrado de %d es %d\n", num, resultado);

    printf("PUNTO B \n");
    cuadra(p_num_2);

    printf("PUNTO C \n");
    funcion_3(p_num_2);

    printf("PUNTO D \n");
    printf("num A es: %d\n", *p_num_2);
    printf("num B es: %d\n", *p_num_3);

    Invertir(p_num_2, p_num_3);

    printf("num A es: %d\n", *p_num_2);
    printf("num B es: %d\n", *p_num_3);


    printf("PUNTO E \n");
    printf("num A es: %d\n", *p_num_2);
    printf("num B es: %d\n", *p_num_3);

    orden(p_num_2, p_num_3);

    printf("num A es: %d\n", *p_num_2);
    printf("num B es: %d\n", *p_num_3);

    return (0);
}

int cuadrado(int num)
{
    int cuadrado;
    cuadrado = num*num;
    return (cuadrado);
}

void cuadra(int *num)
{
    int num_cuadrado = (*num)*(*num);
    printf("el cuadrado de %d es %d\n", *num, num_cuadrado);
}

void funcion_3(int *var)
{
    printf("la direccion de memoria de la variable es: %d\n", &var);

    printf("el contenido de la variable es: %d\n", *var);
}

void Invertir(int *a,int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux = *a;
    if (*a>*b)
    {
        *a = *b;
        *b = aux;
    }
}