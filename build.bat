@echo off
g++ -std=c++17 -Iinclude -c src/Empleado.cpp -o Empleado.o
g++ -std=c++17 -Iinclude -c src/Empresa.cpp -o Empresa.o
g++ -std=c++17 -Iinclude -c src/EmpresaIndustria.cpp -o EmpresaIndustria.o
g++ -std=c++17 -Iinclude -c src/Particular.cpp -o Particular.o
g++ -std=c++17 -Iinclude -c src/Profesional.cpp -o Profesional.o
g++ -std=c++17 -Iinclude -c src/Sucursal.cpp -o Sucursal.o
g++ -std=c++17 -Iinclude -c main.cpp -o main.o
g++ Empleado.o Empresa.o EmpresaIndustria.o Particular.o Profesional.o Sucursal.o main.o -o app.exe
echo Compilacion completa.
app.exe

DEL *.o 
