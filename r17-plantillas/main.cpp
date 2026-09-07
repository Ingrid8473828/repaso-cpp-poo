#include <iostream>
#include <string>
#include "arreglo.hpp"

int main() {

    Arreglo<double> a(3);
    a[0] = 1.1; a[1] = 2.2; a[2] = 3.3;
    Arreglo<double> copia = a;
    a[0] = 99.9;
    std::cout << "original[0]=" << a[0] << " copia[0]=" << copia[0] << '\n';

    Arreglo<std::string> s(2);
    s[0] = "hola"; s[1] = "mundo";
    std::cout << s[0] << " " << s[1] << '\n';

}