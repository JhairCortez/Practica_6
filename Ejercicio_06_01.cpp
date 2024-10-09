// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 1
// Problema planteado: Generar una Matriz
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingresa el tamaño de la matriz (n x n): ";
    cin >> n;
    int matriz[n][n];
    cout << "Ingresa los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> matriz[i][j];
        }
    }
    for (int j = 0; j < n; j++) 
    {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = temp;
    }
    cout << "Matriz después de intercambiar la primera y última fila:\n";
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