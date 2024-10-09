// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 4
// Problema planteado: Generar la matriz para un orden nxn
#include <iostream>
using namespace std;

int main() 
{
    int n = 5;  
    int matriz[n][n];
    for (int i = 0; i < n; i++) 
    {
        int valor_inicial = 1 + 2 * i;  
        for (int j = 0; j < n; j++) 
        {
            matriz[i][j] = valor_inicial + j;
        }
    }
    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}