#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int baskara(float, float, float, float*, float*);

int main(int argc, char const *argv[]){
    float nums[3], x1, x2;
    int raizes;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    if (argc >= 4) {
        for (int i = 1; i < 4; i++) {
            nums[i - 1] = atof(argv[i]);
        }
    }

    else {
        printf("Insira os valores separados por espaco: ");
        scanf("%f %f %f", &nums[0], &nums[1], &nums[2]);
    }

    raizes = baskara(nums[0], nums[1], nums[2], &x1, &x2);

    if (raizes) {
        printf("As raizes da equacao sao:\nX1 = %f\nX2 = %f", x1, x2);
    }

    else {
        printf("Nao e possivel calcular as raizes da equacao!");
    }

    return 0;
}

int baskara(float a, float b, float c, float *px1, float *px2)  {
    float delta;

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0)  {
        return 0;
    }

    *px1 = ((-b) + sqrt(delta)) / 2;
    *px2 = ((-b) - sqrt(delta)) / 2;

    return 1;
}
