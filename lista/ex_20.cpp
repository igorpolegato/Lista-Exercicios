#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(int argc, char const *argv[]) {
    int num, s;

    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira o valor a ser analizado: ");
        scanf("%i", &num);
    }

    s = sum(num);

    if (s) {
        printf("O somatorio de %i e %i", num, s);
    }

    else {
        printf("Nao foi possivel realizar o somatorio de %i", num);
    }

    return 0;
}

int sum(int num) {
    int s = 0;

    if (num < 0) {
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        s += i;
    }

    return s;

}
