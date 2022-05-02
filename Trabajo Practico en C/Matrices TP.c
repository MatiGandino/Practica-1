#include <stdio.h>

/*Para el Trabajo Practico en lenguaje C voy a desarrollar un programa que al introducir dos matrices 3x3 obtenga:
1) Sus determinantes
LISTO 2) Suma entre ambos.
LISTO 3) Multiplicación entre ambas.
LISTO 4) Multiplicación de una de ella con un escalar.
LISTO 5) Matriz transpuesta de ambas.
6) Matriz adjunta de ambas.*/

int j, i; //Variables globales


/*void Determinantes (int matrizA[3][3], int matrizB[3][3]){
	
}*/


void SumaEntreMatrices (int matrizA[3][3], int matrizB[3][3]){
	int suma[3][3];
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			suma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	printf("La matriz suma entre ambas matrices es:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", suma[i][j]);}
		printf("\n");
	}
	
	printf("\n\n");
}


void ProductoEntreMatrices (int matrizA[3][3], int matrizB[3][3]){
	int producto[3][3], a, sumando;
	
	for (a = 0; a < 3; a++) {
		for (i = 0; i < 3; i++) {
			sumando = 0;
			for (j = 0; j < 3; j++) {
				sumando += matrizA[i][j] * matrizB[j][a];
			}
			producto[i][a] = sumando;
		}
	}
	
	printf("La matriz producto entre ambas matrices es:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", producto[i][j]);}
		printf("\n");}
	
	printf ("\n\n");
}
	
	
void ProductoPorUnEscalar (int matrizA[3][3], int matrizB[3][3]){
	char letra;
	int escalar, producEscalar[3][3];
	printf ("¿Que matriz desea multiplicar por un escalar? A o B? (Introduzca letra): "); scanf ("%s", &letra);
	printf ("¿Por qué escalar desea multiplicarla?: "); scanf ("%d", &escalar);
	
	if (letra == 'a' || 'A'){
		for (i = 0; i<3; i++){
			for (j = 0; j<3; j++){
				producEscalar [i][j] = matrizA [i][j] * escalar;
			}
		}
		for (i = 0; i<3; i++){
			for (j = 0; j<3; j++){
				printf ("%d\t", producEscalar[i][j]);
			}
			printf ("\n");
		}
	}
	
	else if (letra == 'b' || 'B'){
		for (i = 0; i<3; i++){
			for (j = 0; j<3; j++){
				producEscalar [i][j] = matrizB [i][j] * escalar;
			}
		}
		for (i = 0; i<3; i++){
			for (j = 0; j<3; j++){
				printf ("%d\t", producEscalar[i][j]);
			}
			printf ("\n");
		}
	}
	
	printf ("\n\n");
}
	
	
void Transpuestas (int matrizA[3][3], int matrizB[3][3]){
	
	printf("La matriz transpuesta de A es:\n");
	for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf("%d\t", matrizA[j][i]);
		}
		printf ("\n");
	}
	
	printf("\nLa matriz transpuesta de B es:\n");
	for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf("%d\t", matrizB[j][i]);
		}
		printf ("\n");
	}

	printf ("\n\n");
}

	
/*void Adjuntas (int matrizA[3][3], int matrizB[3][3]){
	
}*/
	

int main(void) {
	int matrizA[3][3];
	int matrizB[3][3];
	
	//--------------------INTRODUCCION DE LAS MATRICES------------------------------------------------------
	
	printf ("Matriz A:\n");
	for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf ("         En fila %d, digite el valor %d: ", i+1, j+1);
			scanf ("%d", &matrizA[i][j]);
		}
	}
	
	printf ("\n\n");
	
	printf ("Matriz B:\n");
	for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf ("         En fila %d, digite el valor %d: ", i+1, j+1);
			scanf ("%d", &matrizB[i][j]);
		}
	}
	
	printf ("\n\n");
	
	//----------------------Declaracion de funciones---------------------------------------------------
	
	//Determinantes (matrizA, matrizB);
	
	SumaEntreMatrices (matrizA, matrizB);
	
	ProductoEntreMatrices (matrizA, matrizB);
	
	Transpuestas (matrizA, matrizB);
	
	//Adjuntas (matrizA, matrizB);
	
	ProductoPorUnEscalar (matrizA, matrizB);

	
	
	
	//-------------------VER VALORES DE LAS MATRICES---------------------------------
	
	/*for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf ("%d\t", matrizA[i][j]);
		}
	printf ("\n");
	}

	printf ("\n\n");
	
	for (i = 0; i<3; i++){
		for (j = 0; j<3; j++){
			printf ("%d\t", matrizB[i][j]);
		}
		printf ("\n");
	}*/
	
	return (0);
}
