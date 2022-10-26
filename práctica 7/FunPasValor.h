#ifndef FUNPASVALOR_H_INCLUDED
#define FUNPASVALOR_H_INCLUDED
#include<math.h>
char salida='y';
void funcion1()
{
    float numred=0;

    printf("ingresa el numero a redondear: ");
    scanf("%f",&numred);
   numred=round(numred);
   printf("%f", numred);
}
void funcion2()
{

    int a,b;
    printf("ingresa el primer numero: ");
    scanf("%d",&a);
    printf("ingresa el segundo numero: ");
    scanf("%d",&b);
printf("el numero %d es divisible entre %d: ", a,b);
    if(a%b==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }



}
void funcion3()
{

    float num;
    int n;
    printf("ingresa un numero con decimales");
    scanf("%f",&num);


    printf("ingresa cuantos decimales quieres que se muestren: ");
    scanf("%d",&n);

    printf("%.2f",num);
}
void funcion4()
{


  int limite, numero = 2, divisor, banderaprimo;	//bandera primo es la variable de condicion para comprobar si un numero es primo

printf ("ingresa cuantos numeros quieres que se muestren: ");

scanf ("%d", &limite);

printf ("los numeros primos son: ");

while (limite > 0)
    {				//empieza el ciclo

banderaprimo = 1;

for (divisor = 2; divisor < numero; ++divisor)
	{

if (numero % divisor == 0)
	    {

banderaprimo = 0;

break;

}

}

if (banderaprimo)
	{

printf ("%d ", numero);

limite = limite - 1;

}

numero = numero + 1;

}
}
void repetir()
{
     fflush(stdin);
    printf("\nquieres volver a ejecutar el programa? (y/n): ");
    scanf("%c",&salida);
    fflush(stdin);

}

#endif // FUNPASVALOR_H_INCLUDED
