#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <utility>

void contarConVector(const std::vector<std::string>& palabras) {
    std::vector<std::pair<std::string, int>> conteo;
    for (const std::string& w : palabras) {
        bool encontrada = false;
        for (auto& par : conteo) {
            if (par.first == w) { par.second++; encontrada = true; break; }
        }
        if (!encontrada) conteo.push_back({w, 1});
    }
    for (auto& par : conteo) std::cout << par.first << ": " << par.second << '\n';
}

void contarConMap(const std::vector<std::string>& palabras) {
    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) conteo[w]++;
    for (auto& par : conteo) std::cout << par.first << ": " << par.second << '\n';
}

void contarConMultiset(const std::vector<std::string>& palabras) {
    std::multiset<std::string> ms(palabras.begin(), palabras.end());
    std::set<std::string> unicas(palabras.begin(), palabras.end());
    for (const std::string& w : unicas)
        std::cout << w << ": " << ms.count(w) << '\n';
}

int main() {
    std::vector<std::string> palabras = {"pan","agua","pan","sal","agua","pan"};
    std::cout << "-- vector --\n"; contarConVector(palabras);
    std::cout << "-- map --\n"; contarConMap(palabras);
    std::cout << "-- multiset --\n"; contarConMultiset(palabras);
}

// vector es el peor para vocabularios grandes (busqueda lineal
// repetida, O(n^2) peor caso) pero simple y preserva orden de aparicion.
// map es la opcion general: O(n log n), codigo simple, ordena alfabeticamente
// de una vez. multiset funciona pero es menos directo (necesita ademas un
// set de unicas). Cambiaria a vector solo si el vocabulario es muy pequeño
// y me importa el orden exacto de aparicion