#include "../include/Particular.hpp"
#include <iostream>
using namespace std;

Particular::Particular(string codigo, string nombre, double sueldo) : Empleado(codigo, nombre, sueldo) {}

string Particular::trabajar() const {
    return "Trabajando como particular";
}

string Particular::mostrar() const {
    return "Codigo: " + codigo + ", Nombre: " + nombre + ", Sueldo: " + to_string(sueldo);
}
