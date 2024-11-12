#include <stdio.h>
// Código del alumno Emiliano Miño
// link de GIT personal: https://github.com/emimino62
// link del GIT grupal (lider Victor Maehara): https://github.com/vicmaeh/escuela-prueba
// link del GIT del lider: https://github.com/vicmaeh
// funcion para convertir centimetros a pulgadas
float cm_a_pul(float cm) {
    return cm / 2.54;
}

// funcion para convertir pulgadas a centimetros
float pul_a_cm(float pulgadas) {
    return pulgadas * 2.54;
}

int main() {
    float pulgadas=80;

    printf("%.2f cm son %.2f pulgadas\n", cm, cm_a_pul(cm));

    return 0;
}
