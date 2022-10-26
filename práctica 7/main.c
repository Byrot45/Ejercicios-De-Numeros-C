#include <stdio.h>
#include <stdlib.h>
#include "FunPasValor.h"
int main()
{

    int ielegir=0;
do{
    printf("elige una opcion\n");


    printf("1) redondear un numero\n");
     printf("2) comrpobar si un numero divide otro\n");
      printf("3) redondeo a decimales especificados\n");
       printf("1) mostrar los n numeros primos\n");


       scanf("%d", &ielegir);

    switch(ielegir)
    {
    case 1:
    funcion1();
    repetir();
    break;

    case 2:
    funcion2();
 repetir();
    break;

    case 3:
    funcion3();
 repetir();
    break;

    case 4:
    funcion4();
 repetir();
    break;
    default:
        printf("error, ingresa una opcion válida");
         repetir();
    }
    }while(salida=='y');

return 0;
}



