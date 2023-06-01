#include <stdio.h>
#include <stdlib.h>
void despliegaAhorcado(const char *nombreArchivoFigura);
void despliegaAhorcado(const char *nombreArchivoFigura) {
FILE *archivo;
char linea[100];
archivo = fopen(nombreArchivoFigura, "r");
if (archivo == NULL) {
printf("No se pudo abrir el archivo.\n");
exit(1);
}
// Leer y mostrar cada línea del archivo
while (fgets(linea, sizeof(linea), archivo) != NULL) {
printf("%s", linea);
}
fclose(archivo);
}
