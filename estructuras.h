#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

struct cliente {
    string nif;
    string nombre;
    string apellido1;
    string apellido2;
    string motivo;
    time_t tiempo;
};

struct cola {
    cliente clientes;
} arrayCola[50];