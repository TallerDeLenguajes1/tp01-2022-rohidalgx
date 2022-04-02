#include <stdio.h>


int main (){

    printf("Hola Mundo");

    int var = 3;
    int *p_var;

    p_var = &var;

    printf("el contenido del puntero es: %d \n", p_var);
    printf("la direccion de memoria almacenada en el puntero es: %d \n", p_var);
    printf("la direccion de memoria almacenada de la variable es: %d \n", &var);
    printf("la direccion de memoria almacenada del puntero es: %d \n", &p_var);
    printf("el tamano de memoria utilizado por esa variable es: %d \n", sizeof(var));




    return (0);
}