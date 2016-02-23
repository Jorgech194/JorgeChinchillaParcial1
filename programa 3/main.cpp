#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
/*Ingresar la nota del examen y la nota acumulada en base a 100.
La nota examen vale 70% y la nota acumulada 30% */

int main()

{ double ne, na, nf;
  printf("Ingresar la nota del examen ...>\n");

  scanf("%lf", &ne);

  printf("Ingresar la nota acumulada ...> \n");

  scanf("%lf", &na);

  nf = (ne * .7) + (na * .3);

  printf( "La nota final es \n%lf \n", nf);
  if(nf>=60)
  {
      printf("Estado de la nota: Aprobado\n");
  }
  else
  {
      printf("Estado de la nota: Reprobado\n");
  }

  system("PAUSE");
  return 0;
}
