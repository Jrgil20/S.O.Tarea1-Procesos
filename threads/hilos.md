# Hilos en C

Los hilos (threads) son una forma de dividir un programa en múltiples tareas que pueden ejecutarse concurrentemente. En C, los hilos se manejan comúnmente usando la biblioteca POSIX Threads (pthreads).

## Creación de un hilo

Para crear un hilo, se utiliza la función `pthread_create`:

```c
#include <pthread.h>
#include <stdio.h>

void* funcion_hilo(void* arg) {
    printf("Hola desde el hilo\n");
    return NULL;
}

int main() {
    pthread_t hilo;
    pthread_create(&hilo, NULL, funcion_hilo, NULL);
    pthread_join(hilo, NULL);
    return 0;
}
```

## Funciones principales

- `pthread_create`: Crea un nuevo hilo.
- `pthread_join`: Espera a que un hilo termine.
- `pthread_exit`: Termina la ejecución de un hilo.
- `pthread_mutex_lock` y `pthread_mutex_unlock`: Controlan el acceso a secciones críticas.

**Parámetros:**

- `thread`: Un puntero a la estructura `pthread_t` que contendrá el ID del hilo.
- `attr`: Un puntero a la estructura `pthread_attr_t` que especifica los atributos del hilo. Si es `NULL`, se usan los atributos predeterminados.
- `start_routine`: Un puntero a la función que será ejecutada por el hilo.
- `arg`: Un puntero al argumento que se pasará a la función `start_routine`.

**Retorno:**

- `int`: 0 en caso de éxito, o un número de error en caso de fallo.

## Ventajas

- **Paralelismo**: Permite ejecutar múltiples tareas al mismo tiempo.
- **Eficiencia**: Mejora el uso de recursos del sistema.

## Consideraciones

- **Sincronización**: Es necesario manejar el acceso concurrente a recursos compartidos.
- **Complejidad**: El uso de hilos puede aumentar la complejidad del código.

Para más detalles, consulta la documentación de pthreads.

[Documentación de POSIX Threads](https://man7.org/linux/man-pages/man7/pthreads.7.html)

**Notas para principiantes:**

- Siempre verifica el valor de retorno de las funciones de pthread para manejar errores adecuadamente.
- Usa `pthread_join` para esperar a que un hilo termine antes de acceder a recursos compartidos.
- Protege los datos compartidos con mutexes para evitar condiciones de carrera.
- Ten en cuenta la sincronización de hilos para prevenir interbloqueos.