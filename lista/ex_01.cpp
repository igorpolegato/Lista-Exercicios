#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volumeEsfera(float);

int main(int argc, char *argv[]) {
	float raio;
	
	if (argc >= 2) {
		raio = atof(argv[1]);
	}
	
	else {
		printf("Insira o raio da esfera em metros: ");
		scanf("%f", &raio);
	}

	printf("Raio: %.2fm\nVolume da esfera: %.2fm^3", raio, volumeEsfera(raio));

	
	return 0;	
}

float volumeEsfera(float raio) {
	float v, pi = 3.14;
	
	v = 4.0f/3.0f * pi * pow(raio, 3);
	
	
	return v;
}
