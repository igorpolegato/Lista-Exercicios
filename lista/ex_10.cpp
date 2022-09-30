#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float idealWeight(float, char);

int main(int argc, char *argv[]) {
    float alt;
    char sex;

    if (argc >= 3) {
        alt = atof(argv[1]);
        sex = argv[2][0];
    }

    else {
        printf("Insira sua altura: ");
        scanf("%f", &alt);
        
        printf("Insira seu sexo: ");
        scanf(" %c", &sex);
        
    }

    printf("\nSeu peso ideal e %.3fkg", idealWeight(alt, sex));

    return 0;
}

float idealWeight(float alt, char sex) {
    float iw;
    sex = toupper(sex);

    iw = (sex == 'M') ? 72.7 * alt - 58 : 62.1 * alt - 44.7;

    return iw;
}
