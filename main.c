#include <stdio.h>

// Funci�n para convertir metros a cent�metros
float met_a_cen(float metros) {
    return metros * 100;
}

// Funci�n para convertir cent�metros a metros
float cen_a_met(float centimetros) {
    return centimetros/100;
}

// funcion para convertir centimetros a pulgadas
float cm_a_pul(float cm) {
    return cm / 2.54;
}

// funcion para convertir pulgadas a centimetros
float pul_a_cm(float pulgadas) {
    return pulgadas * 2.54;
}

// Procedimiento para repetir un texto una X cantidad de veces
void repetir(char texto[], int veces) {
    int i;
	for(i = 0; i < veces; i++) {
        printf("%s\n", texto);
    }
}

// Procedimiento que usa el procedimiento repetir y rodea el texto con l�neas punteadas
void cartel(char texto[], int veces) {
    printf("----------------------------\n");  // L�nea punteada antes
    repetir(texto, veces);               // Llamada a repetir para imprimir el texto
    printf("----------------------------\n");  // L�nea punteada despu�s
}

void linea(char simbolo){ // Declarando el procedimiento "linea" que admite un car�cter, el cual ser� repetido 20 veces para formar la misma.
	int x;
	for(x=0;x < 20; x++){
		printf("%c", simbolo); // Printf dentro de un for de 0 a <20 para que se repita el mismo comando las 20 caracteres necesarios.
	}
	printf("\n"); // \n para el salto de linea luego de hacer la secuencia de caracteres.
}

int main(){
	
	// Prueba de todos los procedimientos y funciones
	
	repetir("Juan",3);
	repetir("Pepe",2);
	cartel("Maria",5);
	float metros=2;
	printf("%.f metros son %.f cent�metros.\n", metros, met_a_cen(metros));
	linea('T');
	float metros2=2;
	printf("%.f metros son %.f cent�metros.\n", metros2, cen_a_met(metros2));
	linea('$');
	cartel("Marcos",4);
	
	return 0;
}
