#include <stdio.h>

int main() {
    int A[20];
    int i;

    for(i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    for(i = 19; i >= 0; i--) {
        printf("%d ", A[i]);
    }
}
