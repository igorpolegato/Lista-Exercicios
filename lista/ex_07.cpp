#include <stdlib.h>
#include <stdio.h>

bool perfect(int);

int main(int argc, char *argv[]) {
    int num;

    printf("Insira o numero a ser analizado: ");
    scanf("%i", &num);

    if (perfect(num)) {
        printf("%i e um numero perfeito!", num);
    }

    else {
        printf("%i nao e um numero perfeito!", num);
    }

    return 0;
}


bool perfect(int num) {
    int result = 0;
	
	for (int i = 1; i <= num / 2; i++) {
		
		if (num % i == 0) {
            result += i;
		}
	}
	
	if (num == result) {
        return true;
    }

    return false;
}
