#include <iostream>

int main() {
    std::cout << 7 / 2 << '\n';                    // predicción: 3 (porque es división de enteros)
    std::cout << 7 / 2.0 << '\n';                   // predicción: 3.5 (porque dividir por un float afecta al entero)
    std::cout << 7 % 2 << '\n';                     // predicción: 1
    std::cout << static_cast<int>(3.99) << '\n';    // predicción: 3.99
    std::cout << (1 == 1.0) << '\n';                // predicción: 0
    unsigned int u = 3;
    std::cout << u - 5 << '\n';                     // predicción: un número muy grande que no va a ser -2
}


// resultados reales 

/*
3
3.5
1	      
3	       // olvidé por completo cortar los decimales al convertirlo en entero
1              // aquí asumo que da 1 porque pues es como un negativo por así decirlo, si hubiera regresado 0 estaría correcto, pero 1 significa que no lo está
4294967294     //aquí no sabía exactamente qué número iba a dar pero sabía que no sería -2 si no uno más grande
*/