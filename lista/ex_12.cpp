#include <stdlib.h>
#include <stdio.h>

#define HOUR24 1440 

struct tim {
    int h=0;
    int min=0;
};

tim duration(tim, tim);

int main(int argc, char *argv[]) {
    tim start, end, dif;

    if (argc >= 5) {
        start.h = atoi(argv[1]);
        start.min = atoi(argv[2]);
        end.h = atoi(argv[3]);
        end.h = atoi(argv[4]);
    }

    else {
        printf("Insira o horario de inicio da partida em horas e minutos, separado por espaco: ");
        scanf("%i %i", &start.h, &start.min);
        
        printf("Insira o horario de termino da partida em horas e minutos, separado por espaco: ");
        scanf("%i %i", &end.h, &end.min);

        printf("\n");

    }

    dif = duration(start, end);

    printf("O tempo da partida foi de %i horas e %i minutos!", dif.h, dif.min);

    return 0;
}

tim duration(tim start, tim end) {
    int difh, difm;
    tim dift;

    difh = end.h - start.h;
    difm = end.min - start.min;

    difh = (difh <= 0) ? 24 - (difh * -1) : difh;

    if (difm < 0) {
        difm = 60 - (difm * -1);
        difh -= 1;
    }

    if ((difh * 60) + difm <= HOUR24) {
        dift.h = difh;
        dift.min = difm;
    }
    else {
        dift.h = dift.min = -1;
    }

    return dift;
}