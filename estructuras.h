#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

typedef struct {
    char *nombre;
    char *carrera;
    char **materias;
    char *paralelo;
} Profesor;

typedef struct {
    char *nombre;
    char *nivel;
    char *carrera;
    char **materias;
    int *creditos;
} Estudiante;

#endif /* ESTRUCTURAS_H */
