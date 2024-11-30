#ifndef SUCURSAL_HPP
#define SUCURSAL_HPP

#include "Empleado.hpp"
#include <list>
#include <string>
using namespace std;

class Sucursal {
private:
    string nombre;
    string codigo;
    string direccion;
    list<Empleado*> empleados;

public:
    Sucursal(string nombre, string codigo, string direccion);
    void agregarEmpleado(Empleado* empleado);
    void listarEmpleados() const;
    void notificarEmpleados(const string& mensaje) const;
    string getNombre() const { return nombre; }
    string getCodigo() const { return codigo; }
    string getDireccion() const { return direccion; }
};

#endif
