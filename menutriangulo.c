#include <stdio.h>
#include <math.h>

int main () {
  int opcion;
  float numero, area, perimetro, primerlado, segundolado, tercerlado, ladoa,
    ladob, ladoc;
  do{
      printf("\n1) Calcular el area de un triangulo\n2) Calcular el perimetro de un triangulo\n"
	 "3) Conocer el tipo de triangulo que se forma\n4) Terminar el programa: ");
      scanf ("%d", &opcion);
      
      switch (opcion) {
	case 1:
	  printf("\nIngresa los lados del triangulo para calcular su area: ");
	  scanf ("%f %f %f", &primerlado, &segundolado, &tercerlado);
	  area = (primerlado + segundolado + tercerlado) / 2;
	  area=area*(area-primerlado)*(area-segundolado)*(area-tercerlado);
	  area=sqrt(area);
	  printf ("\nEl area del triangulo es: %.2f", area);
	  break;
	  
	case 2:
	  printf("\nIngresa los lados del triangulo para calcular su perimetro: ");
	  scanf ("%f %f %f", &primerlado, &segundolado, &tercerlado);
	  perimetro = (primerlado + segundolado + tercerlado);

	  printf ("\nEl perimetro del triangulo es: %.2f", perimetro);
	  break;
	case 3:
	  printf("\nIngresa los lados del triangulo para mostrar su tipo de triangulo que forma: ");
	  scanf ("%f %f %f", &primerlado, &segundolado, &tercerlado);

	  ladoc = primerlado + segundolado;
	  ladob = primerlado + tercerlado;
	  ladoa = segundolado + tercerlado;

	  if (ladoc < tercerlado || ladob < segundolado || ladoa < primerlado)
	    printf
	      ("\nNo es un triangulo porque la suma de los dos lados no es mayor al tercero");
    
	  else if (primerlado == segundolado && segundolado == tercerlado)
	    printf
	      ("\nEs un triangulo equilatero porque todos sus lados son iguales");

	  else
	   if (primerlado == segundolado && segundolado != tercerlado
		 || tercerlado == primerlado && segundolado != primerlado)
	    printf
	      ("\nEs un triangulo isosceles porque tiene dos lados iguales y uno diferente");

	  else
	   if (primerlado != segundolado && segundolado != tercerlado)
	    printf
	      ("\nEs un triangulo escaleno porque tiene todos sus lados diferentes");

	  break;
	case 4:
	  printf ("\nPrograma terminado: ");
        break;
	default:
	  printf
	    ("\nError, solo se acepta la opcion 1,2,3 o 4 para la opcion del menu");
	}
    }
  while (opcion != 4);
  return 0;
}
