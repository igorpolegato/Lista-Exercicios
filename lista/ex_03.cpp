#include <stdlib.h>
#include <stdio.h>

bool isPrimo(int);

int main(int argc, char *argv[]) {
	int num;
	bool primo;
	
	if (argc >= 2) {
		num = atoi(argv[1]);
	}
	else {
		printf("Insira o numero: ");
		scanf("%i", &num);
	}	
	
	primo = isPrimo(num);
	
	if (primo) {
		printf("O numero %i e primo!", num);
	}
	
	else {
		printf("O numero %i nao e primo!", num);
	}
	
	return 0;
}

bool isPrimo(int num) {
	bool primo = true;
	
	for (int i = 2; i <= num / 2; i++) {
		
		if (num % i == 0) {
			primo = false;
			break;
		}
	}
	
	return primo;
}
