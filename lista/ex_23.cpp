#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float sValue(int);

int main(int argc, char const *argv[]) {
    int num;
    float s;


    if (argc >= 2) {
        num = atoi(argv[1]);
    }

    else {
        printf("Insira um valor: ");
        scanf("%i", &num);
    }
    
    s = sValue(num);

    if (s) {
        printf("O valor de S e %f", s);
    }

    else {
        printf("Nao foi possivel calcular o valor de s para %i", num);
    }
    

    return 0;
}

float sValue(int num) {
    //S = 2/4 + 5/5 + 10/6 + ... + (num² + 1) / (num + 3)
    float s;

    if (num < 0) {
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        s += (pow(i, 2) + 1) / (i + 3);
    }

    return s;
}
