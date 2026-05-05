#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Position and values are:\n");

    for(i = 0; i < 5; i++) {
        printf("Position a[%d] : %d\n", i, a[i]);
    }

    return 0;
}