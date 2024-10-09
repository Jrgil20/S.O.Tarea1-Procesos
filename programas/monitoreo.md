# Monitoreo de Programas en C desde la Terminal de Ubuntu

## Comandos Útiles

### 1. `top`
Muestra una lista de los procesos que consumen más recursos en tiempo real.
```sh
top
```
- **Uso**: Permite ver el uso de CPU, memoria y otros recursos por cada proceso.

### 2. `htop`
Una versión mejorada de `top` con una interfaz más amigable.
```sh
sudo apt-get install htop
htop
```
- **Uso**: Ofrece una visualización más clara y opciones de interacción.

### 3. `ps`
Muestra una instantánea de los procesos actuales.
```sh
ps aux
```
- **Uso**: Útil para obtener información detallada sobre procesos específicos.

### 4. `vmstat`
Muestra estadísticas del sistema como memoria, procesos y CPU.
```sh
vmstat 1
```
- **Uso**: Proporciona una visión general del rendimiento del sistema.

### 5. `iostat`
Muestra estadísticas de entrada/salida del sistema.
```sh
sudo apt-get install sysstat
iostat
```
- **Uso**: Útil para monitorear el rendimiento de discos y otros dispositivos de almacenamiento.

### 6. `netstat`
Muestra estadísticas de red.
```sh
netstat -tuln
```
- **Uso**: Permite ver conexiones de red y puertos en uso.

### 7. `strace`
Rastrea las llamadas al sistema y señales.
```sh
strace -p <PID>
```
- **Uso**: Útil para depurar y entender el comportamiento de un programa.

### 8. `lsof`
Lista los archivos abiertos por los procesos.
```sh
lsof
```
- **Uso**: Ayuda a identificar qué archivos están siendo utilizados por qué procesos.

## Documentación

Para más información sobre estos comandos, puedes consultar las páginas del manual usando `man` seguido del nombre del comando. Por ejemplo:
```sh
man top
```
