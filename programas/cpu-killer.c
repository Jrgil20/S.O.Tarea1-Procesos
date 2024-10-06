#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>
#include <unistd.h>
#include <sys/wait.h>

#define NUM_THREADS 4
#define NUM_PROCESSES 2

void* cpu_intensive_task(void* arg) {
    volatile double result = 0.0; // Declarar como volatile para evitar optimizacion
    while (1) {
        for (int i = 1; i < 1000000; ++i) {
            result += sin(i) * tan(i);
            result -= cos(i) * log(i + 1);
            result *= sqrt(i);
            result /= exp(i % 10);
        }
    }
    return NULL;
}

void create_threads() {
    pthread_t threads[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i) {
        if (pthread_create(&threads[i], NULL, cpu_intensive_task, NULL) != 0) {
            perror("Failed to create thread");
            exit(1);
        }
    }

    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }
}

int main() {
    for (int i = 0; i < NUM_PROCESSES; ++i) {
        pid_t pid = fork();
        if (pid < 0) {
            perror("Failed to fork process");
            return 1;
        } else if (pid == 0) {
            // Child process
            create_threads();
            exit(0);
        }
    }

    // Parent process waits for all child processes to finish
    for (int i = 0; i < NUM_PROCESSES; ++i) {
        wait(NULL);
    }

    return 0;
}