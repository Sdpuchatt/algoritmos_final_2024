#include "../include/EmpresaIndustria.hpp"
#include <iostream>
using namespace std;

EmpresaIndustria::EmpresaIndustria(string _codigo, string _nombre)
    : codigo(_codigo), nombre(_nombre) {}

void EmpresaIndustria::agregarSucursal(Sucursal sucursal) {
    sucursales.push_back(sucursal);
}

void EmpresaIndustria::listarSucursales() const {
    for (const auto& sucursal : sucursales) {
        cout << "Sucursal: " << sucursal.getNombre()
             << ", Codigo: " << sucursal.getCodigo()
             << ", Direccion: " << sucursal.getDireccion() << endl;
        sucursal.listarEmpleados();
    }
}
