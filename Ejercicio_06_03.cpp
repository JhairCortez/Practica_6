// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 3
// Problema planteado: The Walking Dead
#include <iostream>
#include <vector>
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 4;
const char AREA[FILAS][COLUMNAS] = {
    {'x', 'o', 'x', 'o'},
    {'o', 'o', 'o', 'o'},
    {'o', 'o', 'x', 'o'}
};
void mostrarMatriz() {
    cout << "Mapa del área:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << AREA[i][j] << " ";
        }
        cout << endl;
    }
}
void contarFilasColumnasSeguras(int &filasSeguras, int &columnasSeguras) {
    filasSeguras = 0;
    columnasSeguras = 0;
    for (int i = 0; i < FILAS; i++) {
        bool filaSegura = true;
        for (int j = 0; j < COLUMNAS; j++) {
            if (AREA[i][j] == 'x') {
                filaSegura = false;
                break;
            }
        }
        if (filaSegura) {
            filasSeguras++;
        }
    }
    for (int j = 0; j < COLUMNAS; j++) {
        bool columnaSegura = true;
        for (int i = 0; i < FILAS; i++) {
            if (AREA[i][j] == 'x') {
                columnaSegura = false;
                break;
            }
        }
        if (columnaSegura) {
            columnasSeguras++;
        }
    }
}
void coordenadasMuertosVivientes(vector<int> &filas, vector<int> &columnas) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (AREA[i][j] == 'x') {
                filas.push_back(i);
                columnas.push_back(j);
            }
        }
    }
}
int contarMuertosVivientes() {
    int cantidad = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (AREA[i][j] == 'x') {
                cantidad++;
            }
        }
    }
    return cantidad;
}

int main() {
    mostrarMatriz();
    int filasSeguras = 0, columnasSeguras = 0;
    contarFilasColumnasSeguras(filasSeguras, columnasSeguras);
    cout << "Filas seguras: " << filasSeguras << endl;
    cout << "Columnas seguras: " << columnasSeguras << endl;
    vector<int> filasMuertos, columnasMuertos;
    coordenadasMuertosVivientes(filasMuertos, columnasMuertos);
    cout << "Coordenadas de los muertos vivientes:\n";
    for (int i = 0; i < filasMuertos.size(); i++) {
        cout << "(" << filasMuertos[i] + 1 << ", " << columnasMuertos[i] + 1 << ")\n";
    }
    int cantidadMuertos = contarMuertosVivientes();
    cout << "Cantidad de muertos vivientes: " << cantidadMuertos << endl;
    int muertosPrimeraColumna = 0;
    for (int i = 0; i < FILAS; i++) {
        if (AREA[i][0] == 'x') {
            muertosPrimeraColumna++;
        }
    }
    if (muertosPrimeraColumna >= 2) {
        cout << "No es posible entrar al complejo.\n";
    } else {
        cout << "Es posible entrar al complejo.\n";
    }
    return 0;
}