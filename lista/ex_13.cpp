#include <stdlib.h>
#include <stdio.h>

char typeOfTriangle[3][100] = {
    "Equilatero",
    "Isoceles",
    "Escaleno"
};

int isTriangle(int, int, int);

int main(int argc, char *argv[]) {
    int x, y, z, t;

    if (argc >= 4) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);
    }

    else {
        printf("Insira a medida dos lados do triangulo, separadas por espaco: ");
        scanf("%i %i %i", &x, &y, &z);
    }

    t = isTriangle(x, y, z);

    if (t != -1) {
        printf("As medidas podem ser lados de um triangulo, sendo ele um triangulo %s", typeOfTriangle[t]);
    }

    else {
        printf("As medidas nao podem ser lados de um triangulo!");
    }

    return 0;
}

int isTriangle(int x, int y, int z) {

    if ((x + y > z) && (x + z > y) && (z + y > x)) {
        if ((x == y) && (x == z) && (y == z)) {
            return 0;
        }

        else if ((x == y) || (x == z) || (y == z)) {
            return 1;
        }

        return 2;
    }

    return -1;
}