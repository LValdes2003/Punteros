//
// Created by Oblitionmaster on 23/10/2023.
//
#include <iostream>

// Punteros de variables
int usarPunteros(int numero, char letra) {
    int *punteroNumero = &numero;
    char *punteroLetra = &letra;

    *punteroNumero = 10;
    *punteroLetra = 'l';

    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Letra: " << letra << std::endl;

    return 0;
}

// Punteros de arrays
void arrayPunteros(int *array, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        array[i] *= 5;
        std::cout << array[i] << std::endl;
    }
}

// Asignación dinámica de memoria
void memoriaDinamica() {
    auto *puntero = new std::string ("Ahora me ves...");
    std::cout << *puntero << std::endl;
    delete puntero;
}

void memoriaDinamica2() {
    auto *puntero = new std::string ("Ahora no me ves.");
    std::cout << *puntero << std::endl;
    delete puntero;
}

// aritmetica de punteros
void aritmeticaPunteros() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int* puntero = array;
    for (int i = 0; i < 10; i++) {
        std::cout << *puntero << std::endl;
        puntero++;
    }
}

void punterosAPunteros() {
    int numero = 1;
    int *puntero = &numero;
    int **puntero_a_puntero = &puntero;

    *puntero *= 8;
    **puntero_a_puntero = **puntero_a_puntero*6/16;

    std::cout << "Numero: " << numero << std::endl;
}

void punterosAFunciones() {
    void (*funcionPuntero)();
    funcionPuntero = &memoriaDinamica;
    funcionPuntero();

    funcionPuntero = &memoriaDinamica2;
    funcionPuntero();
}