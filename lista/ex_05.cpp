#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void secondToTime(int, int*, int*, int*);

int main(int argc, char *argv[]) {
    int h, m, s, temps;

    if (argc >= 2) {
        s = atoi(argv[1]);
    }

    else {
        printf("Insira a quantidade de segundos: ");
        scanf("%i", &temps);
    }

    secondToTime(temps, &h, &m, &s);
    
    printf("\n%i segundos equivalem a %i %s, %i %s e %i %s", temps,
           h, (h == 1) ? "hora" : "horas",
           m, (m == 1) ? "minuto" : "minutos",
           s, (s == 1) ? "segundo" : "segundos"
    );

    return 0;
}

void secondToTime(int secs, int *ph, int *pm, int *ps) {
    int h, m, s;

    h = secs / 3600;
    m = (secs - (3600 * h)) / 60;
    s = (secs - ((h * 3600) + (m * 60)));

    *ph = h;
    *pm = m;
    *ps = s;
}
