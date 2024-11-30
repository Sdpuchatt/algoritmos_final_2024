#include "../include/Sucursal.hpp"
#include <iostream>
using namespace std;

Sucursal::Sucursal(string _nombre, string _codigo, string _direccion)
    : nombre(_nombre), codigo(_codigo), direccion(_direccion) {}

void Sucursal::agregarEmpleado(Empleado* empleado) {
    empleados.push_back(empleado);
}

void Sucursal::listarEmpleados() const {
    for (const auto& empleado : empleados) {
        cout << empleado->mostrar() << endl;
    }
}

void Sucursal::notificarEmpleados(const string& mensaje) const {
    for (const auto& empleado : empleados) {
        cout << "Notificacion a " << empleado->mostrar() << ": " << mensaje << endl;
    }
}

