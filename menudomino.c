#include <stdio.h>

int main () {
    
  char opcion;
  int ficha1, ficha2;
  
  do{
      printf ("\nA) Indicar si la ficha pertenece a un domino de doble 6."
	      "\nB) Indicar si la ficha es una mula y pertenece a un domino de doble 6."
	      "\nC) Indicar que ficha es la anterior a esta y cual es la siguiente ficha."
	      "\nD) Indicar que ficha esta en el renglon anterior y en el siguiente."
	      "\nE) Terminar el programa");
      scanf ("%c", &opcion);
      getchar ();
      switch (opcion) {
	case 'A':
	  printf ("\nIngresa la ficha(ambas partes): ");
	  scanf ("%d %d", &ficha1, &ficha2);
	  if (ficha1 == 6 || ficha2 == 6)
	    printf ("\nLa ficha pertenece a un domino de doble 6");
	  else if (ficha1 >= 0 || ficha1 < 6 && ficha2 >= 0 || ficha2 < 6)
	    printf ("\nLa ficha no pertenece a un domino de doble 6");
	  else
	    printf ("\nLos valores ingresados no forman ninguna ficha");
	  break;

	case 'B':
	  printf ("\nIngresa la ficha(ambas partes): ");
	  scanf ("%d %d", &ficha1, &ficha2);
	  if (ficha1 < 0 || ficha1 > 6 || ficha2 < 0 || ficha2 > 6)
	    printf
	      ("\nEsa ficha no existe porque solo hay fichas con numeros del 0 al 6");
	  else if (ficha1 == 0 && ficha2 == 6 || ficha1 == 6 && ficha2 == 0)
	    printf ("\nLa ficha es mula y pertenece a un domino de doble 6");
	  else if (ficha1 == 6 && ficha2 != 0 || ficha2 == 6 && ficha1 != 0)
	    printf
	      ("\nLa ficha no es mula y si pertenece a un domino de doble 6");
	  else if (ficha1 == 0 && ficha2 != 6 || ficha2 == 0 && ficha1 != 6)
	    printf
	      ("\nLa ficha es una mula y no pertecene a un domino de doble 6");
	  else
	    printf
	      ("\nLa ficha no es mula y no pertenece a un domino de doble 6");
	  break;

	case 'C':
	  printf ("\nIngresa la ficha(ambas partes): ");
	  scanf ("%d %d", &ficha1, &ficha2);
	  if (ficha1 < 0 || ficha1 > 6 || ficha2 < 0 || ficha2 > 6)
	    printf
	      ("\nEsa ficha no existe porque solo hay fichas con numeros del 0 al 6");
	  else if (ficha1 == ficha2 && ficha1 == 0)
	    printf ("\nNo hay una ficha siguiente o anterior de %d/%d",
		    ficha1, ficha2);
	  else if (ficha1 == ficha2 && ficha1 >= 1 && ficha1 <= 6)
	    printf
	      ("\nLa ficha anterior es: %d/%d y no hay ficha siguiente",
	       ficha1 - 1, ficha2);
	  else if (ficha1 == 0 && ficha2 != ficha1 && ficha2 >= 0
		   && ficha2 <= 6)
	    printf ("\nNo hay ficha anterior y la ficha siguiente es %d/%d",
		    ficha1 + 1, ficha2);
	  else
	    printf
	      ("\nLa ficha anterior es: %d/%d y la ficha siguiente es: %d/%d ",
	       ficha1 - 1, ficha2, ficha1 + 1, ficha2);
	  break;

	case 'D':
	  printf ("\nIngresa la ficha(ambas partes): ");
	  scanf ("%d %d", &ficha1, &ficha2);
	  if (ficha1 < 0 || ficha1 > 6 || ficha2 < 0 || ficha2 > 6)
	    printf
	      ("\nEsa ficha no existe porque solo hay fichas con numeros del 0 al 6");
	  else if (ficha1 == ficha2 && ficha1 == 6)
	    printf ("\nNo hay una ficha anterior ni ficha siguiente");
	  else if (ficha1 == ficha2 && ficha1 >= 0 && ficha1 < 6)
	    printf
	      ("\nNo hay ficha anterior y la ficha siguiente es: %d/%d\n ",
	       ficha1, ficha2 + 1);
	  else if (ficha2 == 6 && ficha2 != ficha1 && ficha1 >= 1
		   && ficha1 <= 6)
	    printf ("\nLa ficha anterior es %d/%d y no hay ficha siguiente",
		    ficha1, ficha2 - 1);
	  else
	    printf
	      ("\nLa ficha anterior es: %d/%d y la ficha siguiente es: %d/%d",
	       ficha1, ficha2 - 1, ficha1, ficha2 + 1);
	  break;

	case 'E':
	  printf ("\nPrograma terminado");
	  break;

	default:
	  printf ("\nError, solo se acepta como opcion A,B,C,D, o E");
	}
      getchar ();
    }
  while (opcion != 'E');
  return 0;
}
