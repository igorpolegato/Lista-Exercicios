#include <stdlib.h>
#include <stdio.h>

bool isEven(int);

int main() {
    int num;
    bool pos;

    printf("Insira o valor a ser analizado: ");
    scanf("%i", &num);

    pos = isEven(num);

    if (pos) {
        printf("O numero %i e positivo!", num);
    }
    else {
        printf("O numero %i nao e positivo!", num);
    }
    return 0;
}

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }

    return false;
}
