#include <stdio.h>
#include <stdlib.h>

int divisorsCounter(int);

int main(int argc, char *argv[]) {
    int num, d;

    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira o numero a ser analizado: ");
        scanf("%i", &num);
    }

    d = divisorsCounter(num);

    if (d) {
        printf("\nO numero %i possui %i %s", num, d, (d == 1) ? "divisor" : "divisores");
    }

    else {
        printf("Valor invalido!");
    }

    return 0;
}

int divisorsCounter(int num) {
    int divisors = 1; //O numero é um de seus divisores

    if (num < 0) {
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        
        if (num % i == 0) {
            divisors += 1;
        }
    }

    return divisors;

}
