#include <stdlib.h>
#include <stdio.h>

int dateToDay(int, int, int);

int main(int argc, char *argv[]) {
    int y, m, d, total;

    printf("Insira sua idade em anos, meses e dias separado por espaco: ");
    scanf("%i %i %i", &y, &m, &d);

    total = dateToDay(y, m, d);

    printf("%i anos, %i meses e %i dias equivalem a %i dias", y, m, d, total);

    return 0;
}

int dateToDay(int years, int months, int days) {
    int result = 0;

    result += years * 365;
    result += months * 30;
    result += days;

    return result;

}
