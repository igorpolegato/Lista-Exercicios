#include <stdio.h>
#include <stdlib.h>

int crescente(int, int, int, int*, int*, int*);

int main(int argc, char const *argv[]) {
    int a, b, c;
    printf("Insira os 3 valores separados por espaco: ");
    scanf("%i %i %i", &a, &b, &c);

    crescente(a, b, c, &a, &b, &c);

    printf("A ordem crescente dos numero e: %i, %i, %i", a, b, c);

    return 0;
}

int crescente(int a, int b, int c, int *pa, int *pb, int *pc) {
    int nums[3];

    if (c > a) {
        if (a > b) {
            nums[0] = b;
            nums[1] = a;
            nums[2] = c;
        }

        else if (b < c) {
            nums[0] = a;
            nums[1] = b;
            nums[2] = c;
        }
    }

    else if (a > b) {
        if (b > c) {
            nums[0] = c;
            nums[0] = b;
            nums[0] = a;
        }

        else if (c < a) {
            nums[0] = b;
            nums[0] = c;
            nums[0] = a;
        }
    }

    else if (a < b) {
        if (c < a) {
            nums[0] = c;
            nums[1] = a;
            nums[2] = b;
        }

        else if (c < b) {
            nums[0] = a;
            nums[1] = c;
            nums[2] = b;
        }
    }

    *pa = nums[0];
    *pb = nums[1];
    *pc = nums[2];

    return 0;
}
