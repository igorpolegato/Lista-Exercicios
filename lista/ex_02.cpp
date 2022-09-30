#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float notaFinal(float*, char);

int main(int argc, char *argv[]) {
	float notas[3], m;
	char op[15];

	if (argc >= 4) {
		for (int i = 1; i <= 3; i++) {
			notas[i - 1] = atof(argv[i]);
		}

		op[0] = argv[4][0];
	}

	else {
		for (int i = 0; i < 3; i++) {
			printf("Insira a %i nota: ", i + 1);
			scanf(" %f", &notas[i]);
		}

		fflush(stdin);
		printf("Qual sera o tipo de media?[a/p/h]: ");
		scanf("%s", op);
	}

	m = notaFinal(notas, op[0]);

	printf("\nA media do aluno e %.2f", m);

	
	return 0;
}

float notaFinal(float notas[3], char op) {
	float nf = 0.0f;
	op = toupper(op);

	switch (op) {
		
		case 'A': {
			for (int i = 0; i < 3; i++) {
				nf += notas[i];
			}

			nf = nf / 3;
			break;
		}
		
		case 'P': {
			int pesos[3] = {5, 3, 2};
			int divisor = 0;
			
			for (int i = 0; i < 3; i++) {
				divisor += pesos[i];
				nf += notas[i] * pesos[i];
			}

			nf = nf / divisor;
			break;
		}
		
		case 'H':{
			float divisor = 0;
			
			for (int i = 0; i < 3; i++) {
				divisor += 1.0f/notas[i];
			}
			
			nf = 3 / divisor;
			
			break;
		}
		
		default: {
			printf("Operacao invalida!");
			return -1;
			break;
		}
	}
	
	return nf;
}