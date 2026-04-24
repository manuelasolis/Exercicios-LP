#include <stdio.h>

int main() {
    int Q[20];
    int i, pos = 0;
    int menor;

    for(i = 0; i < 20; i++) {
        do {
            printf("Digite um numero positivo: ");
            scanf("%d", &Q[i]);
        } while(Q[i] < 0);
    }

    menor = Q[0];

    for(i = 1; i < 20; i++) {
        if(Q[i] < menor) {
            menor = Q[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
}
