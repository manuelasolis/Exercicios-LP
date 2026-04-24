#include <stdio.h>
#define M 20

int main() {
    float Notas[M];
    float soma = 0;
    float media;
    int quantidade = 0;
    int i;

    for (i = 0; i < M; i++) {
        printf("Digite a nota obtida: ");
        scanf("%f", &Notas[i]);
        soma = soma + Notas[i];
    }

    media = soma / M;

    for (i = 0; i < M; i++) {
        if (Notas[i] > media) {
            quantidade++;
        }
    }

    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", quantidade);  
}
