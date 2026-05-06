#include <stdio.h>

int main() {
    int b[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Position and values are:\n");

    for(i = 0; i < 5; i++) {
        printf("Position b[%d] : %d\n", i, b[i]);
    }

    return 0;
}a