// main.cpp
#include <iostream>
#include <chrono>
#include "busca.h"

const int maior_tamanho = 1000001;
int arr[maior_tamanho];  // ← movido para fora do main (memória heap global)

int main() {
    for (int i = 0; i < maior_tamanho; i++) {
        arr[i] = i;
    }

    int tamanho = 1;
    int passo = 50000;
    int qtd_medicoes = 100;

    while (tamanho <= maior_tamanho) {
        for (int i = 0; i < qtd_medicoes; i++) {
            int chave = -10;

            auto inicio = std::chrono::high_resolution_clock::now();
            busca(arr, tamanho, chave);
            auto fim = std::chrono::high_resolution_clock::now();

            auto duracao = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio).count();
            std::cout << tamanho << "," << duracao << std::endl;
        }
        tamanho += passo;
    }

    return 0;
}