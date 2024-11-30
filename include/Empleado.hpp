#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
using namespace std;

class Empleado {
protected:
    string codigo;
    string nombre;
    double sueldo;

public:
    Empleado(string codigo, string nombre, double sueldo);
    virtual string trabajar() const = 0; // Método puro
    virtual string mostrar() const = 0; // Método puro
    virtual ~Empleado() = default;      // Destructor virtual
};

#endif
