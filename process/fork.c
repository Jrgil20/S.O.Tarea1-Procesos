#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // Crear un nuevo proceso
    pid = fork();

    if (pid < 0) {
        perror("Error al crear el proceso");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Código del proceso hijo
        printf("Hola desde el proceso hijo!\n");
    } else {
        // Código del proceso padre
        printf("Hola desde el proceso padre!\n");
    }

    return 0;
}