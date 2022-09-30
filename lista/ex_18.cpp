#include <stdlib.h>
#include <stdio.h>

void mTable(int);

int main(int argc, char const *argv[]) {
    int num;

    if (argc >= 2) {
        num = atoi(argv[1]);
    }
    
    else {
        printf("Insira o valor a ser analizado: ");
        scanf("%i", &num);
    }

    mTable(num);

    return 0;
}

void mTable(int num) {
    for (int i = 1; i <= num; i++) {
        printf("%i x %i = %i\n", i, num, i * num);
    }

}

