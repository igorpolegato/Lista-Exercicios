#include <stdlib.h>
#include <stdio.h>

int fatorial(int);

int main(int argc, char *argv[]) {
    int ft, num;
    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira o numero a ser analizado: ");
        scanf("%i", &num);
    }

    ft = fatorial(num);

    if (ft != -1) {
        printf("O fatorial de %i e %i!", num, ft);
    }

    else {
        printf("O numero e invalido!");
    }

    return 0;
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
