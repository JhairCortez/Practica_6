// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 6
// Problema planteado: Traspones una matriz de N x M
#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    cout << "Ingrese el número de filas de la matriz (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas de la matriz (M): ";
    cin >> M;
    int matriz[N][M], transpuesta[M][N];
    cout << "Ingrese los elementos de la matriz (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    cout << "Matriz transpuesta (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}