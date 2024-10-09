# Procesos en C

## ¿Qué es un proceso?
Un proceso es una instancia de un programa en ejecución. Un programa puede tener múltiples procesos ejecutándose simultáneamente.

## Crear un proceso
En C, los procesos se crean utilizando la función `fork()`. Esta función crea un nuevo proceso duplicando el proceso que la llama.

### Ejemplo básico de `fork()`
```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Código del proceso hijo
        printf("Soy el proceso hijo\n");
    } else if (pid > 0) {
        // Código del proceso padre
        printf("Soy el proceso padre\n");
    } else {
        // Error al crear el proceso
        perror("fork");
        return 1;
    }

    return 0;
}
```

## Funciones principales
- `fork()`: Crea un nuevo proceso.
- `exec()`: Reemplaza el proceso actual con un nuevo programa.
- `wait()`: Espera a que un proceso hijo termine.

### Ejemplo de `exec()`
```c
#include <stdio.h>
#include <unistd.h>

int main() {
    char *args[] = {"/bin/ls", NULL};
    execvp(args[0], args);
    // Si execvp falla
    perror("execvp");
    return 1;
}
```

### Ejemplo de `wait()`
```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Código del proceso hijo
        printf("Soy el proceso hijo\n");
    } else if (pid > 0) {
        // Código del proceso padre
        wait(NULL); // Espera a que el proceso hijo termine
        printf("El proceso hijo ha terminado\n");
    } else {
        // Error al crear el proceso
        perror("fork");
        return 1;
    }

    return 0;
}
```

## Parámetros
- `pid_t fork(void)`: No toma parámetros y devuelve el PID del proceso hijo al proceso padre, y 0 al proceso hijo.
- `int execvp(const char *file, char *const argv[])`: Toma el nombre del archivo a ejecutar y una lista de argumentos.
- `pid_t wait(int *status)`: Toma un puntero a un entero donde se almacenará el estado de salida del proceso hijo.


## Ventajas de los procesos
- **Aislamiento**: Cada proceso tiene su propio espacio de memoria, lo que evita que un proceso interfiera con otro.
- **Seguridad**: Los procesos pueden ejecutarse con diferentes permisos, aumentando la seguridad del sistema.
- **Escalabilidad**: Permiten aprovechar mejor los sistemas multiprocesador, ejecutando múltiples procesos en paralelo.

## Consideraciones
- **Consumo de recursos**: Crear y gestionar procesos puede ser costoso en términos de memoria y tiempo de CPU.
- **Comunicación**: La comunicación entre procesos (IPC) puede ser compleja y requiere mecanismos adicionales como tuberías, colas de mensajes o memoria compartida.
- **Sincronización**: Es necesario manejar la sincronización entre procesos para evitar condiciones de carrera y otros problemas de concurrencia.

## Notas para principiantes
- **Comprender `fork()`**: Es fundamental entender cómo `fork()` crea un nuevo proceso y cómo se comportan el proceso padre y el hijo.
- **Manejo de errores**: Siempre verificar los valores de retorno de las funciones del sistema para manejar errores adecuadamente.
- **Practicar con ejemplos**: Implementar y ejecutar ejemplos básicos ayuda a consolidar el conocimiento sobre procesos.

## Documentación oficial
Para más información, consulta la documentación oficial de las funciones mencionadas:
- [`fork()`](https://man7.org/linux/man-pages/man2/fork.2.html)
- [`exec()`](https://man7.org/linux/man-pages/man3/exec.3.html)
- [`wait()`](https://man7.org/linux/man-pages/man2/wait.2.html)
