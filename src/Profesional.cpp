#include "../include/Profesional.hpp"
#include <iostream>
using namespace std;

Profesional::Profesional(string codigo, string nombre, double sueldo) : Empleado(codigo, nombre, sueldo) {}

string Profesional::trabajar() const {
    return "Trabajando como profesional";
}

string Profesional::mostrar() const {
    return "Codigo: " + codigo + ", Nombre: " + nombre + ", Sueldo: " + to_string(sueldo);
}
