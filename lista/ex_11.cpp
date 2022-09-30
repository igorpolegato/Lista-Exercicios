#include <stdio.h>
#include <stdlib.h>

int highest(int*);

int main(int argc, char *argv[]) {
    int nums[3];

    if (argc >= 4) {
        for (int i=0; i < 3; i++) {
            nums[i] = atoi(argv[i + 1]);
        }
    }

    else {
        for (int i = 0; i < 3; i++) {
            printf("Insira o %i valor: ", i+1);
            scanf(" %i", &nums[i]);
        }
    }

    printf("O maior numero do vetor e: %i", highest(nums));

    return 0;
}

int highest(int nums[3]) {
    int h = nums[0];

    for (int i = 1; i < 3; i++) {
        if (nums[i] > h) {
            h = nums[i];
        }
    }

    return h;
}
