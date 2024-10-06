#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *thread_function(void *arg) {
    printf("Hola desde el hilo!\n");
    return NULL;
}

int main() {
    pthread_t thread;
    int result;

    // Crear un nuevo hilo
    result = pthread_create(&thread, NULL, thread_function, NULL);
    if (result != 0) {
        perror("Error al crear el hilo");
        exit(EXIT_FAILURE);
    }

    // Esperar a que el hilo termine
    pthread_join(thread, NULL);

    printf("Hilo terminado\n");
    return 0;
}