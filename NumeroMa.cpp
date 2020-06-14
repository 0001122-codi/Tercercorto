#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    int respuesta = 0;
    int numero = 0;
    int control = 0;
	char juego;

    do
    {
        srand(time(NULL));
        numero = 1 + rand () % ((10+1)-1);
        do
        {
            printf("Adivina un numero");
            printf("¿Sabes cual es?");
            printf("Ingrese su respuesta");
            scanf("%d", &respuesta);

            if (respuesta == numero)
            {
                printf("Excelente, adivinaste el numero");
            
            }
            else if (respuesta<numero)
            {
                printf("Casi, pusiste un numero menor");
            }
            else if (respuesta>numero)
            {
                printf("Por poco, pusiste un numero mayor");
            }
            
            



        } while (respuesta!=numero);
        
    } while (control == 0);
}    