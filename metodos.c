#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"

Profesor *crearProfesor() {
    Profesor *profesor = (Profesor *)malloc(sizeof(Profesor));
    profesor->nombre = (char *)malloc(50 * sizeof(char));
    profesor->carrera = (char *)malloc(50 * sizeof(char));
    profesor->materias = (char **)malloc(3 * sizeof(char *));
    for (int i = 0; i < 3; i++) {
        profesor->materias[i] = (char *)malloc(50 * sizeof(char));
    }
    profesor->paralelo = (char *)malloc(10 * sizeof(char));
    return profesor;
}

void liberarProfesor(Profesor *profesor) {
    free(profesor->nombre);
    free(profesor->carrera);
    for (int i = 0; i < 3; i++) {
        free(profesor->materias[i]);
    }
    free(profesor->materias);
    free(profesor->paralelo);
    free(profesor);
}

Estudiante *crearEstudiante() {
    Estudiante *estudiante = (Estudiante *)malloc(sizeof(Estudiante));
    estudiante->nombre = (char *)malloc(50 * sizeof(char));
    estudiante->nivel = (char *)malloc(10 * sizeof(char));
    estudiante->carrera = (char *)malloc(50 * sizeof(char));
    estudiante->materias = (char **)malloc(7 * sizeof(char *));
    for (int i = 0; i < 7; i++) {
        estudiante->materias[i] = (char *)malloc(50 * sizeof(char));
    }
    estudiante->creditos = (int *)malloc(7 * sizeof(int));
    return estudiante;
}

void liberarEstudiante(Estudiante *estudiante) {
    free(estudiante->nombre);
    free(estudiante->nivel);
    free(estudiante->carrera);
    for (int i = 0; i < 7; i++) {
        free(estudiante->materias[i]);
    }
    free(estudiante->materias);
    free(estudiante->creditos);
    free(estudiante);
}

void mostrarProfesor(Profesor *profesor) {
    printf("Nombre del profesor: %s\n", profesor->nombre);
    printf("Carrera del profesor: %s\n", profesor->carrera);

    int i;

    printf("Materias dictando:\n");
    for (i = 0; i < 3; i++) {
        printf("Materia %d: %s\n", i + 1, profesor->materias[i]);
        printf("Paralelo: %s\n", profesor->paralelo);
        if (profesor->paralelo[i] == 0) {
            break;
        }
    }
}

void mostrarEstudiante(Estudiante *estudiante) {
    printf("Nombre del estudiante: %s\n", estudiante->nombre);
    printf("Nivel del estudiante: %s\n", estudiante->nivel);
    printf("Carrera del estudiante: %s\n", estudiante->carrera);

    int i;

    printf("Materias tomando:\n");
    for (i = 0; i < 7; i++) {
        printf("Materia %d: %s\n", i + 1, estudiante->materias[i]);
        printf("Créditos: %d\n", estudiante->creditos[i]);
        if (estudiante->creditos[i] == 0) {
            break;
        }
    }
}
