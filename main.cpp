#include "include/Particular.hpp"
#include "include/Profesional.hpp"
#include "include/Empresa.hpp"
#include "include/Sucursal.hpp"
#include "include/EmpresaIndustria.hpp"
#include <iostream>
using namespace std;

int main() {
    // Crear sucursal
    Sucursal sucursal1("Centro", "001", "Av. Principal 123");

    // Crear empleados
    Empleado* emp1 = new Particular("P001", "Juan Perez", 30000);
    Empleado* emp2 = new Profesional("PR001", "Ana Gomez", 50000);
    Empleado* emp3 = new Empresa("E001", "Empresa S.A.", 100000);

    // Agregar empleados a la sucursal
    sucursal1.agregarEmpleado(emp1);
    sucursal1.agregarEmpleado(emp2);
    sucursal1.agregarEmpleado(emp3);

    // Crear empresa industria y agregar sucursal
    EmpresaIndustria empresa("IND001", "Industria S.A.");
    empresa.agregarSucursal(sucursal1);

    // Mostrar información
    empresa.listarSucursales();

    // Notificar empleados
    sucursal1.notificarEmpleados("La reunion sera a las 10 AM.");

    // Limpiar memoria
    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
