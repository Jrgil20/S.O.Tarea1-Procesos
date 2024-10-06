# S.O.Tarea1-Procesos

## Parte 1: Cómo ejecutar programas en Lubuntu

### Pasos para ejecutar el programa en Lubuntu

1. **Abrir la terminal**:
    - Puedes abrir la terminal presionando `Ctrl + Alt + T` o buscando "Terminal" en el menú de aplicaciones.

2. **Navegar al directorio del programa**:
    - Usa el comando `cd` para cambiar al directorio donde se encuentra tu programa. Por ejemplo:
      ```bash
      cd /ruta/al/directorio/del/programa
      ```

3. **Dar permisos de ejecución (si es necesario)**:
    - Si tu programa es un script, puede que necesites darle permisos de ejecución:
      ```bash
      chmod +x nombre_del_programa
      ```

4. **Ejecutar el programa**:
    - Para ejecutar el programa, escribe `./nombre_del_programa` y presiona `Enter`.

5. **Verificar la salida**:
    - Observa la salida en la terminal para asegurarte de que el programa se ejecutó correctamente.

### Ejemplo

Supongamos que tienes un script llamado `mi_programa.sh` en el directorio `/home/usuario/mis_programas`:

```bash
cd /home/usuario/mis_programas
chmod +x mi_programa.sh
./mi_programa.sh
```

Estos pasos te permitirán ejecutar tu programa en Lubuntu de manera efectiva.



## Parte 2: Hilos y Procesos en Lubuntu

### Hilos

Los hilos permiten la ejecución concurrente de tareas dentro de un mismo proceso. En Lubuntu, puedes trabajar con hilos utilizando varios lenguajes de programación como C, C++, Python, entre otros.

#### Ejemplo en C

```c
#include <stdio.h>
#include <pthread.h>

void* tarea(void* arg) {
    printf("Hilo en ejecución\n");
    return NULL;
}

int main() {
    pthread_t hilo;
    pthread_create(&hilo, NULL, tarea, NULL);
    pthread_join(hilo, NULL);
    return 0;
}
```

### Procesos

Los procesos son instancias de programas en ejecución. En Lubuntu, puedes crear procesos utilizando la terminal o programando en C, Python, entre otros lenguajes. 

#### Crear un proceso en la terminal

Para crear un proceso, simplemente ejecuta un programa desde la terminal. Por ejemplo:

```bash
./mi_programa
```

### Ejemplo en C para crear procesos

En C, puedes crear procesos utilizando la función `fork()`. Aquí tienes un ejemplo simple:

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Este es el proceso hijo
        printf("Proceso hijo\n");
    } else if (pid > 0) {
        // Este es el proceso padre
        printf("Proceso padre\n");
    } else {
        // Error al crear el proceso
        perror("fork");
        return 1;
    }

    return 0;
}
```

En este ejemplo, `fork()` crea un nuevo proceso. El proceso hijo recibe un valor de `pid` de 0, mientras que el proceso padre recibe el PID del proceso hijo. Si `fork()` falla, retorna -1.


### Comando `time`

El comando `time` se utiliza para medir el tiempo de ejecución de un programa. Esto es útil para analizar el rendimiento de tus programas.

#### Uso del comando `time`

```bash
time ./nombre_del_programa
```

Este comando mostrará el tiempo real, el tiempo de usuario y el tiempo del sistema que tomó ejecutar el programa.

### Ejemplo completo

Supongamos que tienes un script llamado `mi_programa.sh` y quieres medir su tiempo de ejecución:

```bash
cd /home/usuario/mis_programas
chmod +x mi_programa.sh
time ./mi_programa.sh
```

Estos pasos te permitirán trabajar con hilos, procesos y medir el tiempo de ejecución de tus programas en Lubuntu.
