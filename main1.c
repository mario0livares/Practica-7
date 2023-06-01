#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PALABRAS 100
#define LONGITUD_PALABRA 20
void leerPalabrasDeArchivo(const char *nombreArchivo, char
palabras[MAX_PALABRAS][LONGITUD_PALABRA]);
int main() {
char palabras[MAX_PALABRAS][LONGITUD_PALABRA]; // Arreglo para
almacenar las palabras
printf("Ingrese las palabras (separadas por Enter):\n");
leerPalabrasDeArchivo("Palabras.txt", palabras);
// Imprimir las palabras almacenadas en el arreglo
printf("\nPalabras almacenadas:\n");
for (int i = 0; i < MAX_PALABRAS; i++) {
if (palabras[i][0] != '\0') {
printf("%s\n", palabras[i]);
} else {
break;
}
}
return 0;
}
void leerPalabrasDeArchivo(const char *nombreArchivo, char
palabras[MAX_PALABRAS][LONGITUD_PALABRA]) {
FILE *archivo;
char palabra[LONGITUD_PALABRA];
int i = 0;
archivo = fopen(nombreArchivo, "w"); // Abrir en modo escritura para
sobreescribir el archivo
if (archivo == NULL) {
printf("No se pudo abrir el archivo.\n");
exit(1);
}
while (i < MAX_PALABRAS) {
fgets(palabra, LONGITUD_PALABRA, stdin); // Leer palabra desde la
entrada estándar (teclado)
palabra[strcspn(palabra, "\n")] = '\0'; // Eliminar el salto de
línea
if (strlen(palabra) == 0) {
break; // Si se ingresa una palabra vacía, terminar la lectura
}
strcpy(palabras[i], palabra);
fprintf(archivo, "%s\n", palabra); // Escribir la palabra en el
archivo
i++;
}
fclose(archivo);
}
