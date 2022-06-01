#include <stdio.h>
#define T 3  //tamaño de las matrices

int j, i; //Variables globales


void Determinantes (int matrizA[T][T], int matrizB[T][T]){
	int matrizdetA, matrizdetB;
	
	matrizdetA = matrizA[0][0] * (matrizA[1][1] * matrizA[2][2] - matrizA[1][2] * matrizA[2][1])
				- matrizA[0][1] * (matrizA[1][0] * matrizA[2][2] - matrizA[1][2] * matrizA[2][0])
				+ matrizA[0][2] * (matrizA[1][0] * matrizA[2][1] - matrizA[1][1] * matrizA[2][0]);
	
	matrizdetB = matrizB[0][0] * (matrizB[1][1] * matrizB[2][2] - matrizB[1][2] * matrizB[2][1])
				- matrizB[0][1] * (matrizB[1][0] * matrizB[2][2] - matrizB[1][2] * matrizB[2][0])
				+ matrizB[0][2] * (matrizB[1][0] * matrizB[2][1] - matrizB[1][1] * matrizB[2][0]);
	
	
	printf ("El determinante de A es: %i\nEl determinate de B es: %i\n", matrizdetA, matrizdetB);
	printf("\n\n");
}


void SumaEntreMatrices (int matrizA[T][T], int matrizB[T][T]){
	int suma[T][T];
	
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			suma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	printf("La matriz suma entre ambas matrices es:\n");
	for (i = 0; i <= (T-1); i++) {
		for (j = 0; j <= (T-1); j++) {
			printf("%d\t", suma[i][j]);}
		printf("\n");
	}
	
	printf("\n\n");
}


void ProductoEntreMatrices (int matrizA[T][T], int matrizB[T][T]){
	int producto[T][T], a, sumando;
	
	for (a = 0; a <= (T-1); a++) {
		for (i = 0; i < T; i++) {
			sumando = 0;
			for (j = 0; j <= (T-1); j++) {
				sumando += matrizA[i][j] * matrizB[j][a];
			}
			producto[i][a] = sumando;
		}
	}
	
	printf("La matriz producto entre ambas matrices es:\n");
	for (int i = 0; i <= (T-1); i++) {
		for (int j = 0; j <= (T-1); j++) {
			printf("%d\t", producto[i][j]);}
		printf("\n");}
	
	printf ("\n\n");
}
	
	
void ProductoPorUnEscalar (int matrizA[T][T], int matrizB[T][T]){
	char letra;
	int escalar, producEscalar[T][T];
	printf ("¿Que matriz desea multiplicar por un escalar? ¿A o B? (Introduzca letra): "); scanf ("%s", &letra);
	printf ("¿Por que escalar desea multiplicarla?: "); scanf ("%d", &escalar);
	
	if (letra == 'a' || 'A'){
		for (i = 0; i <= (T-1); i++){
			for (j = 0; j <= (T-1); j++){
				producEscalar [i][j] = matrizA [i][j] * escalar;
			}
		}
		for (i = 0; i<T; i++){
			for (j = 0; j <= (T-1); j++){
				printf ("%d\t", producEscalar[i][j]);
			}
			printf ("\n");
		}
	}
	
	else if (letra == 'b' || 'B'){
		for (i = 0; i <= (T-1); i++){
			for (j = 0; j <= (T-1); j++){
				producEscalar [i][j] = matrizB [i][j] * escalar;
			}
		}
		for (i = 0; i <= (T-1); i++){
			for (j = 0; j <= (T-1); j++){
				printf ("%d\t", producEscalar[i][j]);
			}
			printf ("\n");
		}
	}
	
	printf ("\n\n");
}
	
	
void Transpuestas (int matrizA[T][T], int matrizB[T][T]){
	
	printf("La matriz transpuesta de A es:\n");
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf("%d\t", matrizA[j][i]);
		}
		printf ("\n");
	}
	
	printf("\nLa matriz transpuesta de B es:\n");
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf("%d\t", matrizB[j][i]);
		}
		printf ("\n");
	}

	printf ("\n\n");
}

	
void Adjuntas (int matrizA[T][T], int matrizB[T][T]){
	int matrizadA[T][T];
	int matrizadB[T][T];
	
	printf ("La matriz adjunta de A es:\n");
	matrizadA[0][0] = (matrizA[1][1] * matrizA[2][2]) - (matrizA[2][1] * matrizA[1][2]);
	matrizadA[0][1] = (matrizA[1][2] * matrizA[2][0]) - (matrizA[1][0] * matrizA[2][2]);
	matrizadA[0][2] = (matrizA[1][0] * matrizA[2][1]) - (matrizA[1][1] * matrizA[2][0]);
	matrizadA[1][0] = (matrizA[2][1] * matrizA[0][2]) - (matrizA[2][2] * matrizA[0][1]);
	matrizadA[1][1] = (matrizA[2][2] * matrizA[0][0]) - (matrizA[2][0] * matrizA[0][2]);
	matrizadA[1][2] = (matrizA[2][0] * matrizA[0][1]) - (matrizA[2][1] * matrizA[0][0]);
	matrizadA[2][0] = (matrizA[0][1] * matrizA[1][2]) - (matrizA[0][2] * matrizA[1][1]);
	matrizadA[2][1] = (matrizA[0][2] * matrizA[1][0]) - (matrizA[0][0] * matrizA[1][2]);
	matrizadA[2][2] = (matrizA[0][0] * matrizA[1][1]) - (matrizA[0][1] * matrizA[1][0]);
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf ("%d\t", matrizadA[i][j]);
		}
		printf("\n");
	}
	
	printf ("\nLa matriz adjunta de B es:\n");
	matrizadB[0][0] = (matrizB[1][1] * matrizB[2][2]) - (matrizB[2][1] * matrizB[1][2]);
	matrizadB[0][1] = (matrizB[1][2] * matrizB[2][0]) - (matrizB[1][0] * matrizB[2][2]);
	matrizadB[0][2] = (matrizB[1][0] * matrizB[2][1]) - (matrizB[1][1] * matrizB[2][0]);
	matrizadB[1][0] = (matrizB[2][1] * matrizB[0][2]) - (matrizB[2][2] * matrizB[0][1]);
	matrizadB[1][1] = (matrizB[2][2] * matrizB[0][0]) - (matrizB[2][0] * matrizB[0][2]);
	matrizadB[1][2] = (matrizB[2][0] * matrizB[0][1]) - (matrizB[2][1] * matrizB[0][0]);
	matrizadB[2][0] = (matrizB[0][1] * matrizB[1][2]) - (matrizB[0][2] * matrizB[1][1]);
	matrizadB[2][1] = (matrizB[0][2] * matrizB[1][0]) - (matrizB[0][0] * matrizB[1][2]);
	matrizadB[2][2] = (matrizB[0][0] * matrizB[1][1]) - (matrizB[0][1] * matrizB[1][0]);
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf ("%d\t", matrizadB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
}
	

int main(void) {
	int matrizA[T][T];
	int matrizB[T][T];
	
	//--------------------INTRODUCCION DE LAS MATRICES-------------------------------
	
	printf ("Matriz A:\n");
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf ("         En fila %d, digite el valor %d: ", i+1, j+1);
			scanf ("%d", &matrizA[i][j]);
		}
	}
	
	printf ("\n\n");
	
	printf ("Matriz B:\n");
	for (i = 0; i <= (T-1); i++){
		for (j = 0; j <= (T-1); j++){
			printf ("         En fila %d, digite el valor %d: ", i+1, j+1);
			scanf ("%d", &matrizB[i][j]);
		}
	}
	
	printf ("\n\n\n");
	
	
	//-------------------VER VALORES DE LAS MATRICES---------------------------------
	
	printf("    Matriz A:\n");
	for (i = 0; i<T; i++){
		for (j = 0; j<T; j++){
		printf ("%d\t", matrizA[i][j]); }
	printf ("\n"); }
	
	printf ("\n");
	
	printf("    Matriz B:\n");
	for (i = 0; i<T; i++){
		for (j = 0; j<T; j++){
		printf ("%d\t", matrizB[i][j]); }
	printf ("\n"); }
	
	printf ("\n\n");
	
	
	//----------------------Declaracion de funciones---------------------------------
	
	Determinantes (matrizA, matrizB);
	
	SumaEntreMatrices (matrizA, matrizB);
	
	ProductoEntreMatrices (matrizA, matrizB);
	
	Transpuestas (matrizA, matrizB);
	
	Adjuntas (matrizA, matrizB);
	
	ProductoPorUnEscalar (matrizA, matrizB);
	
	
	
	return (0);
}
