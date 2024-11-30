#ifndef EMPRESAINDUSTRIA_HPP
#define EMPRESAINDUSTRIA_HPP

#include "Sucursal.hpp"
#include <list>
#include <string>
using namespace std;

class EmpresaIndustria {
private:
    string codigo;
    string nombre;
    list<Sucursal> sucursales;

public:
    EmpresaIndustria(string codigo, string nombre);
    void agregarSucursal(Sucursal sucursal);
    void listarSucursales() const;
};

#endif
