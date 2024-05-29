//ronquii.github.io

//código aula 24/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

// Função para ordenar o vetor em ordem crescente
void ordenarVetor(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int numeros[TAMANHO_VETOR];
    int i, j, numero_sorteado;

    srand(time(NULL)); // Semente para geração de números aleatórios

    // Preenchimento do vetor com números aleatórios distintos
    for (i = 0; i < TAMANHO_VETOR; i++) {
        do {
            numero_sorteado = rand() % 10 + 1; // Sorteia um número entre 1 e 100
            // Verifica se o número já foi sorteado antes
            for (j = 0; j < i; j++) {
                if (numeros[j] == numero_sorteado) {
                    numero_sorteado = 0; // Seta como 0 para repetir o sorteio
                    break;
                }
            }
        } while (numero_sorteado == 0);
        numeros[i] = numero_sorteado;
    }

    // Ordena o vetor
    ordenarVetor(numeros, TAMANHO_VETOR);

    // Mostra os números sorteados para o usuário
    printf("Os numeros sorteados foram:\n ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d\n ", numeros[i]);
    }
    printf("\n");

    return 0;
}
