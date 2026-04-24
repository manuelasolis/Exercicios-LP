#include <stdio.h>

int main() {
    int Q[20];
    int i;
     float pos;
    float maior;

    for(i = 0; i < 20; i++) {
        do {
            printf("Digite um numero positivo: ");
            scanf("%d", &Q[i]);
        } while(Q[i] < 0);
    }

    maior = Q[0];

    for(i = 1; i < 20; i++) {
        if(Q[i] > maior) {
            maior = Q[i];
            pos = i;
        }
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Posicao: %d\n",pos );
}
