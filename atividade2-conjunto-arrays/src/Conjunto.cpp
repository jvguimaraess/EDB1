#include "Conjunto.h"
#include <iostream>

Conjunto::Conjunto(const int capacidade)
{
    this->capacidade = capacidade;
    this->quantidade = 0;
    this->elementos = new int[capacidade];
}

Conjunto::~Conjunto()
{
    delete[] this->elementos;
}

bool Conjunto::contem(int elemento) const
{
    for (int i = 0; i < this->quantidade; ++i)
    {
        if (this->elementos[i] == elemento)
        {
            return true;
        }
    }
    return false;
}

bool Conjunto::inserir(int elemento)
{
    if (this->contem(elemento) || this->quantidade == this->capacidade)
        return false;

    this->elementos[this->quantidade] = elemento;
    this->quantidade++;
    return true;
}

bool Conjunto::remover(int elemento)
{
    for (int i = 0; i < this->quantidade; i++)
    {
        if (this->elementos[i] == elemento)
        {
            this->elementos[i] = this->elementos[this->quantidade - 1];
            this->quantidade--;
            return true;
        }
    }
    return false;
}

int Conjunto::tamanho() const
{
    return this->quantidade;
}

void Conjunto::imprimir() const
{
    std::cout << "{ ";
    for(int i = 0; i < quantidade; ++i)
    {
        std::cout << this->elementos[i] << " ";
    }
    std::cout << "}" << std::endl;
}
