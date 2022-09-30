#include <stdlib.h>
#include <stdio.h>

bool isPositive(int);

int main(int argc, char *argv[]) {
    int num;

    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira o valor para ser analizado: ");
        scanf("%i", &num);
    }

    if (isPositive(num)) {
        printf("O numero %i e positivo!", num);
    }

    else {
        printf("O numero %i nao e positivo!", num);
    }

    return 0;
}

bool isPositive(int num) {
    if (num < 0) {
        return false;
    }

    return true;
}