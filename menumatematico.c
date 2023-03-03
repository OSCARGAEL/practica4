#include <stdio.h>
#include <math.h>

int main (){
  int opcion, numero, potencia = 0;
  float raizcuadrada = 0;
  do {
      printf("\n1) Determinar si el numero es par o impar\n2) Elevar un numero a una potencia\n"
	 "3) Calcular la raiz cuadrada de un numero\n4) Terminar el programa");
      scanf ("%d", &opcion);

      switch (opcion) {
	case 1:
	  printf ("\nIngresa un numero para determinar si es par o impar: ");
	  scanf ("%d", &numero);
	  if (numero == 0)
	    printf ("\nEl 0 no es impar o par");
	  else if (numero % 2 == 0)
	    printf ("\nEl numero es par");
	  else
	    printf ("\nEl numero es impar");
	  break;
	case 2:
	  printf("\nIngresa un numero y despues ingresa la potencia que desea elevarlo: ");
	  scanf ("%d %d", &numero, &potencia);
	  potencia = pow (numero, potencia);
	  printf ("\nLa potencia de %d es : %d", numero, potencia);
	  break;
	case 3:
	  printf ("\nIngresa un numero para calcular su raiz cuadrada: ");
	  scanf ("%d", &numero);
	  if(numero>=0){
	  raizcuadrada = sqrt (numero);
	  printf ("\nLa raiz cuadrada de %d es : %.2f", numero, raizcuadrada);
	  }else
	  printf("\nNo se puede calcular la raiz cuadrada de numeros negativos");
	  break;
	case 4:
	  printf ("\nPrograma terminado");
	  break;
	default:
	  printf
	    ("\nError, solo se aceptan 1,2,3 y 4 para la opcion del menu");

	}
    }
  while (opcion != 4);
  return 0;
}

