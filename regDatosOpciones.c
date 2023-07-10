#include <stdio.h>
#include "estructuras.h"
#include "metodos.h"

int main(int argc, char *argv[]) {
    int cantidadPersonas;
    char opcion;

    if (argc != 3) {
        printf("programa <cantidad de personas> <opcion>\n");
        return 1;
    }

    cantidadPersonas = atoi(argv[1]);
    opcion = argv[2][1];

    if (cantidadPersonas < 2 || (opcion != 'p' && opcion != 'e' && opcion != 'a')) {
        do {
            printf("Ingrese la cantidad de personas a registrar (debe ser mayor o igual a 2): ");
            scanf("%d", &cantidadPersonas);
        } while (cantidadPersonas < 2);

        printf("Ingrese la opción:\n");
        printf("Profesor: -p\n");
        printf("Estudiante: -e\n");
        printf("Ambos: -a\n");
        scanf(" %c", &opcion);
    }

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
