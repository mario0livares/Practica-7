#include <stdio.h>
#include <stdlib.h>
void despliegaAhorcado(const char *nombreArchivoFigura);
int main() {
char nombreArchivo[50];
printf("Ingrese el nombre del archivo de figuras del ahorcado: ");
scanf("%s", nombreArchivo);
despliegaAhorcado(nombreArchivo);
return 0;
}
