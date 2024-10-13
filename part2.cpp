#include <stdio.h>

// funcion para convertir centimetros a pulgadas
float cm_a_pul(float cm) {
    return cm / 2.54;
}

// funcion para convertir pulgadas a centimetros
float pul_a_cm(float pulgadas) {
    return pulgadas * 2.54;
}

int main() {
    float cm, pulgadas;

    // indicar la cantidad de centimetros al usuario
    printf("ingrese cantidad de centimetros a convertir a pulgadas:\n");
    scanf("%f", &cm);
    printf("%.2f cm son %.2f pulgadas\n", cm, cm_a_pul(cm));

    // indicar la cantidad de pulgadas al usuario
    printf("ingrese cantidad de pulgadas a convertir a centimetros:\n");
    scanf("%f", &pulgadas);
    printf("%.2f pulgadas son %.2f cm\n", pulgadas, pul_a_cm(pulgadas));

    return 0;
}
