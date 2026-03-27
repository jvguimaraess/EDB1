#include "busca.h"

int busca_bin(const int* arr, int inicio, int fim, int chave) {
    int meio = inicio + (fim - inicio) / 2;

    if (inicio > fim) {
        return -1;
    }

    if (arr[meio] == chave) {
        return meio;
    }

    if (arr[meio] < chave) {
        return busca_bin(arr, meio + 1, fim, chave);
    }

    else {
        return busca_bin(arr, inicio, meio - 1, chave);
    }
}

int busca(const int* arr, int tamanho, int chave) {
    return busca_bin(arr, 0, tamanho - 1, chave);
}