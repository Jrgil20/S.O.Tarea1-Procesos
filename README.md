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