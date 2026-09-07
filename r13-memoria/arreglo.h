#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo {

public:

    Arreglo(int n) : n_(n), datos_(new int[n]()) {}

    Arreglo(const Arreglo& o) : n_(o.n_), datos_(new int[o.n_]) {
        for (int i = 0; i < n_; ++i) datos_[i] = o.datos_[i];
    }

    Arreglo& operator=(const Arreglo& o) {
        if (this != &o) {
            int* nuevo = new int[o.n_];
            for (int i = 0; i < o.n_; ++i) nuevo[i] = o.datos_[i];
            delete[] datos_;
            datos_ = nuevo;
            n_ = o.n_;
        }
        return *this;
    }


    ~Arreglo() { 
	delete[] datos_; 
	}

    int& operator[](int i) { 
	return datos_[i]; 
	}

    int size() const { 
	return n_; 
	}

private:

    int n_;
    int* datos_;
};

#endif