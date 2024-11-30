#ifndef PARTICULAR_HPP
#define PARTICULAR_HPP

#include "Empleado.hpp"

class Particular : public Empleado {
public:
    Particular(string codigo, string nombre, double sueldo);
    string trabajar() const override;
    string mostrar() const override;
    ~Particular() = default;
};

#endif
