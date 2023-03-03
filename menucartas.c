#include <stdio.h>

int main () {
  char opcion, naipe;
  int carta;
  do {
      printf
	("\nA) Indicar si la carta pertenece a una baraja\nB) Indicar el valor de la carta de la forma A,2,3,...10,J,Q,K\n"
	 "C) Indicar el palo de la carta de la forma corazon, diamante, espada, trebol\nD) Terminar el programa");
      scanf ("%c", &opcion);
      getchar ();
      switch (opcion){
	case 'A':
	  printf ("\nIngresa el valor de la carta: ");
	  scanf ("%d", &carta);
	  if(carta <= 13 && carta >= 1)
	    printf ("\nLa carta pertenece a una baraja");
	  else
	    printf ("\nLa carta no pertenece a una baraja");
	  break;
	case 'B':
	  printf("\nIngresa el valor de la carta: ");
	  scanf("%d",&carta);
	  if(carta >= 1 && carta <= 13)
	    {
	      if (carta == 1)
		printf ("\nLa forma de %d es: A", carta);
	      else if (carta == 11)
		printf ("\nLa forma de %d es: J", carta);
	      else if (carta == 12)
		printf ("\nLa forma de %d es: Q", carta);
	      else if (carta == 13)
		printf ("\nLa forma de %d es: K", carta);
	      else
		printf ("\nLa forma de %d es: %d", carta, carta);
	    }
	  else
	    printf ("\nLa forma de %d no pertenece a ninguna carta", carta);
	  break;
	case 'C':
	  printf
	    ("\nIngresa el palo de la carta\n'c'=corazones\n'd'=diamantes\n'e'=espadas\n't'=treboles:");
	  scanf ("%c", &naipe);
	  if (naipe == 'c')
	    printf ("\nEl palo o naipe de la carta es de corazones");
	  else if (naipe == 'd')
	    printf ("\nEl palo o naipe de la carta es de diamantes");
	  else if (naipe == 'e')
	    printf ("\nEl palo o naipe de la carta es de espadas");
	  else if (naipe == 't')
	    printf ("\nEl palo o naipe de la carta es de treboles");
	  else
	    printf
	      ("\nEl valor ingresado no pertenece a ningun palo de cartas");
	  break;
	  
	case 'D':
	  printf ("\nPrograma terminado");
	  break;
	  
	default:
	  printf ("\nError, solo se aceptan las opciones A,B,C o D ");
	}
      getchar ();
    }
  while (opcion != 'D');
  return 0;
}
