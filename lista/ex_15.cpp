#include <stdlib.h>
#include <stdio.h>

float average();

int main(int argc, char *argv[]) {
    printf("O valor da media e: %.2f", average());
    return 0;
}

float average() {
    int num;
    float av=0, len = 0.0f;

    while (num != 0) {
        printf("Insira o numero a ser adicionado (para calcular a media digite 0): ");
        scanf("%i", &num);

        while (num < 0) {
            printf("Valor invalido!\nO numero deve ser positivo.\n\n");
            printf("Insira o numero a ser adicionado (para calcular a media digite 0): ");
            scanf("%i", &num);
        }

        if (num != 0) {
            av += num;
            len += 1;
        }
    }

    av = av / len;

    return av;
}