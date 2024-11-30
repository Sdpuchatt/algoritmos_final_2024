#include "../include/Empresa.hpp"
#include <iostream>
using namespace std;

Empresa::Empresa(string codigo, string nombre, double sueldo) : Empleado(codigo, nombre, sueldo) {}

string Empresa::trabajar() const {
    return "Trabajando como empresa";
}

string Empresa::mostrar() const {
    return "Codigo: " + codigo + ", Nombre: " + nombre + ", Sueldo: " + to_string(sueldo);
}

