//ronquii.github.io

//código aula 24/05/2024
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int sorteio, num, min_idx;
    for (sorteio = 0; sorteio < n - 1; sorteio++) {
        min_idx = sorteio;
        for (num = sorteio + 1; num < n; num++) {
            if (arr[num] < arr[min_idx]) {
                min_idx = num;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[sorteio];
        arr[sorteio] = temp;
    }
}

int main() {
    int sorteio;
    int numeros[5]; 
    int ife;

    srand(time(0));

    printf("Numeros sorteados: \n");
    for (sorteio = 0; sorteio < 5; sorteio++) {
        int numSorteado;
        do {
            numSorteado = rand() % 102;
        } while (jaFoiSorteado(numeros, sorteio, numSorteado));
        numeros[sorteio] = numSorteado;
        printf("%d ", numeros[sorteio]);
    }
    printf("\n");

    selectionSort(numeros, 5); 

    printf("Numeros ordenados: \n");
    for (sorteio = 0; sorteio < 5; sorteio++) {
        printf("%d ", numeros[sorteio]);
    }
    printf("\n");

    return 0;
}

int jaFoiSorteado(int arr[], int tamanho, int num) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == num) {
            return 1; 
        }
    }
    return 0; 
}
