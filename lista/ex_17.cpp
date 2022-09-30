#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct numsRange {
    int nums[50] = {0};
    int min = 0;
    int max = 0;
};

numsRange minMax(numsRange);

int main(int argc, char *argv[]) {
    numsRange nums;
    int num, min, max;

    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &num);

        //num = 123000 % rand() % 250000;
        nums.nums[i] = num;
    }

    nums = minMax(nums);

    printf("O valor minimo dos 50 apresentados e %i, e o maximo e %i.", nums.min, nums.max);

    return 0;
}

numsRange minMax(numsRange nums) {
    int h, l;

    h = l = nums.nums[0];

    for (int i = 1; i < 50; i++) {
        if (nums.nums[i] > h) {
            h = nums.nums[i];
        }

        if (nums.nums[i] < l) {
            l = nums.nums[i];
        }
    }

    nums.min = l;
    nums.max = h;

    return nums;
}
