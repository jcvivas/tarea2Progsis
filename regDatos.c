#include "estructuras.h"
#include "metodos.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int cantidadPersonas;
  char opcion;

  do {
    printf("Ingrese la cantidad de personas a registrar (debe ser mayor o "
           "igual a 2): ");
    scanf("%d", &cantidadPersonas);
  } while (cantidadPersonas < 2);

  printf("Ingrese la opción:\n");
  printf("Profesor: -p\n");
  printf("Estudiante: -e\n");
  printf("Ambos: -a\n");
  scanf(" %c", &opcion);

  int i;
  Profesor *profesor;
  Estudiante *estudiante;

  if (opcion == 'p' || opcion == 'a') {
    printf("Registro del profesor:\n");
    profesor = crearProfesor();
    registrarProfesor(profesor);
    printf("\n");
    mostrarProfesor(profesor);
    printf("\n");
    liberarProfesor(profesor);
  }

  if (opcion == 'e' || opcion == 'a') {
    for (i = 0; i < cantidadPersonas; i++) {
      printf("Registro del estudiante %d:\n", i + 1);
      estudiante = crearEstudiante();
      registrarEstudiante(estudiante);
      printf("\n");
      mostrarEstudiante(estudiante);
      printf("\n");
      liberarEstudiante(estudiante);
    }
  }

  return 0;
}
