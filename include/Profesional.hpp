#ifndef PROFESIONAL_HPP
#define PROFESIONAL_HPP

#include "Empleado.hpp"

class Profesional : public Empleado {
public:
    Profesional(string codigo, string nombre, double sueldo);
    string trabajar() const override;
    string mostrar() const override;
    ~Profesional() = default;
};

#endif
