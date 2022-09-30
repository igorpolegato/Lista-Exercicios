#include <stdlib.h>
#include <stdio.h>

float sValue(int);
int fatorial(int);

int main(int argc, char const *argv[]) {
    int num;
    float s;

    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira o valor a ser analizado: ");
        scanf("%i", &num);
    }

    s = sValue(num);

    if (s) {
        printf("O valor de S e %f", s);
    }

    else {
        printf("Nao e possivel calcular o valor de S com %i", num);
    }

    return 0;
}

float sValue(int num) {
    //S = 1 + 1/2! + 1/3! + ... + 1/num!
    float s = 1;

    if (num <= 0) {
        return 0;
    }

    for (int i = 2; i <= num; i++) {
        s += 1.0f / fatorial(i);
    }

    return s;
}

int fatorial(int num) {
	int result = 1;

	if (num <= 0) {
		return -1;
	}

    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}
