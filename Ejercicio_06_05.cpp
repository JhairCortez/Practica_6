// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 5
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N
#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    cout << "Ingrese el número de filas de la primera matriz (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas de la primera matriz (M): ";
    cin >> M;
    int matriz1[N][M], matriz2[M][N], resultado[N][N];
    cout << "Ingrese los elementos de la primera matriz (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> matriz1[i][j];
        }
    }
    cout << "Ingrese los elementos de la segunda matriz (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            resultado[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            for (int k = 0; k < M; k++) 
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    cout << "Resultado de la multiplicación de matrices (" << N << "x" << N << "):\n";
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}