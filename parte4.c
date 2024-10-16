// Procedimiento 4 - Procedimiento "Linea" : mostrar� por pantalla una l�nea de 20 caracteres con el simbolo indicado.
// Victor Maehara

#include <stdio.h>

void linea(char simbolo){ // Declarando el procedimiento "linea" que admite un carácter, el cual será repetido 20 veces para formar la misma.
	for(int x=0;x < 20; x++){
		printf("%c", simbolo); // Printf dentro de un for de 0 a <20 para que se repita el mismo comando las 20 caracteres necesarios.
	}
	printf("\n"); // \n para el salto de linea luego de hacer la secuencia de caracteres.
}

int main(){
	
	linea('#');
	
	return 0;
	
}
