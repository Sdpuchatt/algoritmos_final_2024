#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include "Empleado.hpp"

class Empresa : public Empleado {
public:
    Empresa(string codigo, string nombre, double sueldo);
    string trabajar() const override;
    string mostrar() const override;
    ~Empresa() = default;
};

#endif
