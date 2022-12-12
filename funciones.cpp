// Librerias

#include "estructuras.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

// Declaración de variables globales

int x = 0;

// Función para mostrar al cliente dentro de la consulta

int mostrarConsulta() {

    if (arrayCola[0].clientes.nif.empty()) {

        cout << "Consulta Vacia" << endl;
        cout << endl;

    } else {

        cout << "Consulta: " << arrayCola[0].clientes.nombre << endl;
        
    }

}

// Función para mostrar los clientes en cola

int mostrarCola() {

    if (arrayCola[0].clientes.nif.empty()) {

        cout << "Cola Vacia" << endl;
        cout << endl;

    } else {

        cout << "Cola de Citas: ";

        for (int i = 1; i <= x - 1; i++) {
            cout << arrayCola[i].clientes.nombre << "(" << arrayCola[i].clientes.tiempo << ")" << "|";
        }

        cout << endl << endl;
    }

}

// Funcion del apartado 6 del menu para mostrar todos los clientes tanto consulta como cola

int mostrarCitas() {

    for (int i = 0; i <= x - 1; i++) {
        cout << i << " => ";
        cout << arrayCola[i].clientes.nif << "|";
        cout << arrayCola[i].clientes.nombre << "|";
        cout << arrayCola[i].clientes.apellido1 << "|";
        cout << arrayCola[i].clientes.apellido2 << "|";
        cout << arrayCola[i].clientes.motivo << "|";
        cout << arrayCola[i].clientes.tiempo;
        cout << endl;
    }

}

// Funcion encargada de recoger los datos del cliente y meterlo en el array

int agregarCita() {

    if (arrayCola[x].clientes.nif.empty()) {
        cout << "Introduce el NIF del cliente" << endl;
        cin >> arrayCola[x].clientes.nif;
        cout << "Introduce el Nombre del cliente" << endl;
        cin >> arrayCola[x].clientes.nombre;
        cout << "Introduce el primer apellido del cliente" << endl;
        cin >> arrayCola[x].clientes.apellido1;
        cout << "Introduce el segundo apellidos del cliente" << endl;
        cin >> arrayCola[x].clientes.apellido2;
        cout << "Introduce el motivo de la cita" << endl;
        cin >> arrayCola[x].clientes.motivo;
        cout << "Introduce el Tiempo de Consulta" << endl;
        cin >> arrayCola[x].clientes.tiempo;
        x++;
    } else {
        cout << "Introduce el NIF del cliente" << endl;
        cin >> arrayCola[x].clientes.nif;
        cout << "Introduce el Nombre del cliente" << endl;
        cin >> arrayCola[x].clientes.nombre;
        cout << "Introduce el primer apellido del cliente" << endl;
        cin >> arrayCola[x].clientes.apellido1;
        cout << "Introduce el segundo apellidos del cliente" << endl;
        cin >> arrayCola[x].clientes.apellido2;
        cout << "Introduce el motivo de la cita" << endl;
        cin >> arrayCola[x].clientes.motivo;
        cout << "Introduce el Tiempo de Consulta" << endl;
        cin >> arrayCola[x].clientes.tiempo;
        x++;
    }
    
}

// Funcion para eliminar al cliente

int eliminarCita() {

    int numCita = 0;

    mostrarCitas();

    cout << "Introduce el número de la cita que desea eliminar" << endl;
    cin >> numCita;

    for (int i = 0; i < x - 1; i++) {
        arrayCola[numCita] = arrayCola[i + 1];
    }

    x--;

}

// Funcion para colar a un cliente a una posición en concreto dentro del array

int colarCita() {

    int posicion = 0;

    mostrarCitas();

    cout << "Introduce la posición en la que se colara al cliente" << endl;
    cin >> posicion;

    // For que se encarga de importar el cliente nuevo en la posición marcada y mover a todos una posición a la derecha

    for (int i = x; i > posicion; i--) {
        arrayCola[i] = arrayCola[i - 1];
    }

    x++;

    cout << "Introduce el NIF del cliente" << endl;
    cin >> arrayCola[posicion].clientes.nif;
    cout << "Introduce el Nombre del cliente" << endl;
    cin >> arrayCola[posicion].clientes.nombre;
    cout << "Introduce el primer apellido del cliente" << endl;
    cin >> arrayCola[posicion].clientes.apellido1;
    cout << "Introduce el segundo apellido del cliente" << endl;
    cin >> arrayCola[posicion].clientes.apellido2;
    cout << "Introduce el motivo de la cita" << endl;
    cin >> arrayCola[posicion].clientes.motivo;
    cout << "Introduce el Tiempo de Consulta" << endl;
    cin >> arrayCola[posicion].clientes.tiempo;

}

// Funcion para intercambiar puestos dentro del array entre dos personas

int intercambiarCita() {
    
    cola pivote[50];
    int posicion1 = 0;
    int posicion2 = 0;

    mostrarCitas();

    cout << "Introduce el número del usuario que quieres mover" << endl;
    cin >> posicion1;

    cout << "Introduce el número de la posición a donde quieres mover" << endl;
    cin >> posicion2;

    // Con una variable pivote conseguimos mover a los clientes de posición 

    pivote[0] = arrayCola[posicion1];
    arrayCola[posicion1] = arrayCola[posicion2];
    arrayCola[posicion2] = pivote[0];

}

// Funcion de urgencia para introducir un cliente automaticamente en la consulta moviento al cliente que ya estaba a la cola

int urgencia() {

    // Recreamos el mismo codigo que en apartado de colar pero con la diferencia de colar automaticamente en la consulta o posición 0

    for (int i = x; i > 0; i--) {
        arrayCola[i] = arrayCola[i - 1];
    }

    x++;

    cout << "Introduce el NIF del cliente" << endl;
    cin >> arrayCola[0].clientes.nif;
    cout << "Introduce el Nombre del cliente" << endl;
    cin >> arrayCola[0].clientes.nombre;
    cout << "Introduce el primer apellido del cliente" << endl;
    cin >> arrayCola[0].clientes.apellido1;
    cout << "Introduce el primer apellido del cliente" << endl;
    cin >> arrayCola[0].clientes.apellido2;
    cout << "Introduce el motivo" << endl;
    cin >> arrayCola[0].clientes.motivo;
    cout << "Introduce el Tiempo de Consulta" << endl;
    cin >> arrayCola[0].clientes.tiempo;
}