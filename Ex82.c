#include <stdio.h>

int main() {
    int A[10], M[10];
    int i, X;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for(i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
}
