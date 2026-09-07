#include <iostream>
#include <vector>
#include <string>
 

class Figura {

public:

    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
    virtual ~Figura() {}
};


class Circulo : public Figura {
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double area() const override { 
	return 3.14159265 * radio * radio; 
	}

    std::string nombre() const override { 
	return "Circulo"; 
	}
};


class Rectangulo : public Figura {
    double base, altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double area() const override { 
	return base * altura; 
	}
    std::string nombre() const override {
	return "Rectangulo";
	}
};


int main() {
    std::vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0;
    for (Figura* f : figs) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }
    std::cout << "Total: " << total << '\n';

    for (Figura* f : figs) delete f;
}