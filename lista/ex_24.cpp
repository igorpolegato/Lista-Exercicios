#include <stdlib.h>
#include <stdio.h>

long pow2(int, int);

int main(int argc, char const *argv[]) {
    int x, z, pw;

    if (argc >= 3) {
        x = atoi(argv[1]);
        z = atoi(argv[2]);
    }

    else {
        printf("Insira o valor e a potencia separados por espaco: ");
        scanf("%i %i", &x, &z);
    }
    
    printf("%i elevado a %i e igual a %i", x, z, pow2(x, z));

    return 0;
}

long pow2(int x, int z) {
    long result = 1;

    for (int i = 0; i < z; i++) {
        result *= x;
    }

    return result;
}
