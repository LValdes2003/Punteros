#include <iostream>
#include "funciones.h"

int main() {
    int numero = 0;
    char letra = 'a';
    usarPunteros(numero, letra);
    std::cout << std::endl;

    const int cantidad = 10;
    int array[cantidad] = {1,2,3,4,5,6,7,8,9,10};
    arrayPunteros(array, cantidad);
    std::cout << std::endl;

    memoriaDinamica();
    std::cout << std::endl;

    aritmeticaPunteros();
    std::cout << std::endl;

    punterosAPunteros();
    std::cout << std::endl;

    punterosAFunciones();

    return 0;
}
