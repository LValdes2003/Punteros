#include <iostream>
#include "funciones.h"

int main() {
    int numero = 0;
    char letra = 'a';
    int *pNumero = &numero;
    char *pLetra = &letra;

    *pNumero = 10;
    *pLetra = 'l';

    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Letra: " << letra << std::endl;    std::cout << std::endl;
    std::cout << std::endl;

    const int cantidad = 10;
    int array[cantidad] = {1,2,3,4,5,6,7,8,9,10};
    for (int & i : array) {
        i *= 5;
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    auto *pString = new std::string ("Ahora me ves...");
    std::cout << *pString << std::endl;
    delete pString;
    std::cout << std::endl;

    aritmeticaPunteros();
    std::cout << std::endl;

    int **puntero_a_puntero;
    puntero_a_puntero = &pNumero;
    * pNumero = 8;
    **puntero_a_puntero = **puntero_a_puntero*6/16;

    std::cout << "Numero: " << numero << std::endl;
    std::cout << std::endl;

    void (*funcionPuntero)();
    funcionPuntero = &memoriaDinamica;
    funcionPuntero();

    funcionPuntero = &memoriaDinamica2;
    funcionPuntero();
    return 0;
}
