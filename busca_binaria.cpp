#include "busca.h"

int busca(const int* arr, int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == chave) {
            return meio;
        }

        if (arr[meio] < chave) {
            inicio = meio + 1;
        }

        else {
            fim = meio - 1;
        }
    }
    return -1;
}