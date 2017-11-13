#include <iostream>
#include <conio.h>
using namespace std;

void generar_matriz(int numeros[3][3], int i, int j);
void transpuesta(int numeros[3][3], int i, int j);
int main()
{
    int numeros[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];

		}
	}
	generar_matriz(numeros,3,3);
	transpuesta(numeros,3,3 );
	getch();
	return 0;

}
void generar_matriz(int numeros[3][3],int i, int j )
{

    cout<<"\nMatriz Normal\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void transpuesta(int numeros[3][3], int i, int j)
{
    cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
}
