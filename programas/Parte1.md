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

### If you are using gcc, you can compile the code with the following command:

```bash
gcc -o cpu-eater cpu-eater.c -lm
```

5. **Verificar la salida**:
    - Observa la salida en la terminal para asegurarte de que el programa se ejecutó correctamente.

### Ejemplo

Supongamos que tienes un script llamado `mi_programa.sh` en el directorio `/home/usuario/mis_programas`:

```bash
cd /home/usuario/mis_programas
chmod +x mi_programa.sh
./mi_programa.sh
```

Para monitorear un programa en ejecución y obtener información sobre su proceso, puedes usar varios comandos en la terminal de Linux. Aquí tienes algunos comandos útiles junto con una breve descripción y ejemplos de uso:

### 1. `ps`
El comando `ps` muestra información sobre los procesos en ejecución.

- **Descripción**: Muestra una instantánea de los procesos actuales.
- **Uso**:
  ```bash
  ps -ef | grep nombre_del_programa
  ```
  - `-e`: Muestra todos los procesos.
  - `-f`: Muestra el formato completo.
  - `grep nombre_del_programa`: Filtra la salida para mostrar solo el proceso específico.

### 2. `top`
El comando `top` proporciona una vista dinámica en tiempo real de los procesos en ejecución.

- **Descripción**: Muestra los procesos en ejecución y su uso de recursos en tiempo real.
- **Uso**:
  ```bash
  top
  ```
  - Puedes buscar el proceso específico dentro de `top` presionando `/` y escribiendo el nombre del programa.

### 3. `htop`
El comando `htop` es una versión mejorada de `top` con una interfaz más amigable.

- **Descripción**: Muestra los procesos en ejecución con una interfaz interactiva.
- **Uso**:
  ```bash
  htop
  ```
  - Puedes buscar el proceso específico dentro de `htop` presionando `/` y escribiendo el nombre del programa.

### 4. `pidof`
El comando `pidof` obtiene el ID de proceso (PID) de un programa en ejecución.

- **Descripción**: Muestra el PID del programa especificado.
- **Uso**:
  ```bash
  pidof nombre_del_programa
  ```

### 5. `pstree`
El comando `pstree` muestra los procesos en forma de árbol, mostrando la jerarquía de procesos.

- **Descripción**: Muestra los procesos en forma de árbol.
- **Uso**:
  ```bash
  pstree -p | grep nombre_del_programa
  ```
  - `-p`: Muestra los PIDs junto a los nombres de los procesos.

### 6. `time`
El comando `time` mide el tiempo de ejecución de un programa.

- **Descripción**: Muestra el tiempo real, de usuario y de sistema que tarda en ejecutarse un programa.
- **Uso**:
  ```bash
  time ./nombre_del_programa
  ```

### Ejemplo de uso:

Supongamos que tienes un programa llamado `cpu-eater` y quieres monitorearlo:

1. **Obtener el PID del programa**:
   ```bash
   pidof cpu-eater
   ```

2. **Ver información detallada del proceso**:
   ```bash
   ps -ef | grep cpu-eater
   ```

3. **Monitorear el uso de recursos en tiempo real**:
   ```bash
   top
   ```

4. **Ver la jerarquía de procesos**:
   ```bash
   pstree -p | grep cpu-eater
   ```

5. **Medir el tiempo de ejecución**:
   ```bash
   time ./cpu-eater
   ```

Estos comandos te ayudarán a monitorear y obtener información detallada sobre los procesos en ejecución en tu sistema.

