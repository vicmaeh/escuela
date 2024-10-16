#include <stdio.h>
// Función para convertir metros a centímetros
float met_a_cen(float metros) {
    return metros * 100;
}
// Función para convertir centímetros a metros
float cen_a_met(float centimetros) {
    return centimetros/100;
}
int main() {
    float metros=2;

    printf("%.f metros son %.f centímetros.\n", metros, met_a_cen(metros));
    return 0;
}
