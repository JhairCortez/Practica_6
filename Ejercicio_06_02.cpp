// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 09/10/2024
// Número de ejercicio: 2
// Problema planteado: Generar una matriz de N x N
#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include <cmath> 
using namespace std;

int main() 
{
    int n, A, B;
    cout << "Ingresa el tamaño de la matriz (n x n): ";
    cin >> n;
    cout << "Ingresa el valor mínimo (A): ";
    cin >> A;
    cout << "Ingresa el valor máximo (B): ";
    cin >> B;
    int matriz[n][n];
    srand(time(0));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            matriz[i][j] = A + rand() % (B - A + 1);
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
    int suma_ultima_columna = 0;
    for (int i = 0; i < n; i++) 
    {
        suma_ultima_columna += matriz[i][n - 1];
    }
    cout << "Suma de la última columna: " << suma_ultima_columna << endl;
    int producto_ultima_fila = 1;
    for (int j = 0; j < n; j++) 
    {
        producto_ultima_fila *= matriz[n - 1][j];
    }
    cout << "Producto de la última fila: " << producto_ultima_fila << endl;
    int mayor_valor = matriz[0][0], fila = 0, columna = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (matriz[i][j] > mayor_valor) 
            {
                mayor_valor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
    cout << "Mayor valor: " << mayor_valor << " en la posición (" << fila + 1 << ", " << columna + 1 << ")\n";
    double suma_total = 0, suma_cuadrada = 0;
    int total_elementos = n * n;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            suma_total += matriz[i][j];
            suma_cuadrada += matriz[i][j] * matriz[i][j];
        }
    double media = suma_total / total_elementos;
    double varianza = (suma_cuadrada / total_elementos) - (media * media);
    double desviacion_estandar = sqrt(varianza);
    cout << "Desviación estándar: " << desviacion_estandar << endl;
    return 0;
}