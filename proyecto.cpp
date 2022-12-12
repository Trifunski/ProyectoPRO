// Importar librerias

#include "funciones.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {

    // Función para las tildes en consola

    SetConsoleOutputCP(65001);

    int opcion;

    // Bucle para mostrar siempre el menu cuando se este en el

    while (true) {

        // Funciones para mostrar la consulta y cola

        mostrarConsulta();
        mostrarCola();

        // Menú

        cout << "1.- Añadir Cita" << endl;
        cout << "2.- Eliminar Cita" << endl;
        cout << "3.- Colar Cita" << endl;
        cout << "4.- Intercambiar Cita" << endl;
        cout << "5.- Urgencia" << endl;
        cout << "6.- Mostrar Citas" << endl;
        cout << "7.- Refrescar" << endl;
        cout << "8.- Salir" << endl;
        cout << endl;
        cout << "Introduce una opción" << endl;
        cin >> opcion;

        // Switch para cada apartado del menú con sus respectivas funciones

        switch (opcion) {
            
            case 1: 
                system("cls");
                agregarCita();
                system("cls");
                break;

            case 2: 
                system("cls");
                eliminarCita();
                system("cls");
                break;

            case 3: 
                system("cls");
                colarCita();
                system("cls");
                break;

            case 4: 
                system("cls");
                intercambiarCita();
                system("cls");
                break;

            case 5: 
                system("cls");
                urgencia();
                system("cls");
                break;

            case 6:
                system("cls");
                mostrarCitas();
                getch();
                system("cls");
                break;

            case 7:
                system("cls");
                break;

            case 8: 
                exit(1);
                break;
        
        }

    }

}