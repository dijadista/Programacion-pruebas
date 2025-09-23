#include <iostream>
float multiplica (int a, float b) {
    return (a*b);
}

int main ()  {
    int numero = 0; 
    float factor = 0; 

    std::cout << "Dame un numero entero:\n"; 
    std::cin >> numero;

    std::cout << "Dame un numero flotante:\n";
    std::cin >> factor;

    std::cout << "El resultado es: " << multiplica (numero, factor) << "\n";
    return 0; 

}