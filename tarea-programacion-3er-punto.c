#include <stdio.h>

// Procedimiento para repetir un texto una X cantidad de veces
void repetir(char *texto, int veces) {
    for(int i = 0; i < veces; i++) {
        printf("%s\n", texto);
    }
}

// Procedimiento que usa el procedimiento repetir y rodea el texto con líneas punteadas
void cartel(char *texto, int veces) {
    printf("----------------------------\n");  // Línea punteada antes
    repetir(texto, veces);               // Llamada a repetir para imprimir el texto
    printf("----------------------------\n");  // Línea punteada después
}

int main() {
    char texto[] = "Hola, mundo!";
    int veces = 3;
    
    // Llamada al procedimiento cartel
    cartel(texto, veces);
    
    return 0;
}
