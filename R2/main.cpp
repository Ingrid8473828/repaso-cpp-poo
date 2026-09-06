#include <iostream>

int main() {

    int entero = 10;
    double decimal = entero; 
    std::cout << "conversion implicita de int a double: " << decimal << std::endl;

    double pi = 3.14159;
    int pi_entero = static_cast<int>(pi);
    std::cout << "conversion explicita con static_cast: " << pi_entero << std::endl;

    return 0;
}