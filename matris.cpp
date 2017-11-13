#include <iostream>
#include <stdlib.h>
#include <time.h>
#define FILA 100
#define COLUMNA 100
using namespace std;

void generar_matriz(int mat[FILA][COLUMNA], int fil, int col);
void mostrar_matriz(int mat[FILA][COLUMNA], int fil, int col);
int main(){
    int A[FILA][COLUMNA],B[FILA][COLUMNA],C[FILA][COLUMNA];
    int fila, columna;

    cout<<"ingrese el tamaño de la fila y columna:\n";
    cin>>fila;
    cin>>columna;
    srand(time(NULL));
    cout<<"Matriz A:\n";
    generar_matriz(A, fila, columna);
    mostrar_matriz(A, fila, columna);
    cout<<"Matriz B:\n";
    generar_matriz(B, fila, columna);
    mostrar_matriz(B, fila, columna);
    return 0;
}


    void generar_matriz(int mat[FILA][COLUMNA], int fil, int col)
{
    for(int f=0;f<fil;f++)
        for(int c=0;c<fil;c++)
            mat[f][c] = 1 + rand () % (10-1);
}
void mostrar_matriz(int mat[FILA][COLUMNA], int fil, int col)
{
    for(int f=0;f<fil;f++)
    {
        for(int c=0;c<col;c++)
            cout<<mat[f][c]<<"\t";
        cout<<"\n\n";
    }
}
