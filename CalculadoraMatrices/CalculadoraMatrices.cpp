/*
	[GameDev]author: twscraft[AMM] from UAEH - ICBI
	Computer Science Student

	Colaboration with:
		- DrumeanObservations[AJA] from UAEH - ICBI
		- ZkillSU[AYHS] from UAEH - ICBI
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int opc;
	do {
		//Mostramos el menu
		cout << "	   MENU" << "\n";
		cout << "-----------------" << "\n" << "\n" << "\n";
		cout << "1) Suma de matrices";
		cout << "2) Resta de matrices";
		cout << "3) Multiplicacion de matrices";
		cout << "4) Multiplicacion por un escalar";
		cout << "5) Calcular matriz transpuesta";
		cout << "6) Calcular matriz inversa";
		cout << "7) Calcular determinante de una matriz";
		cout << "8) Salir del programa";
		cout << "-----------------" << "\n";

		cin >> opc;

		switch (opc) {
		case 1:
			int cant;
			system("cls");
			cout << "Ingresa la cantidad de matrices a sumar: ";
			cin >> cant;
			for (int i = 0; i < cant; i++)
			{
				for (int j = 0; j < cant; j++)
				{

				}

				//Pedimos la cantidad de filas y columnas de nuestra i-esima matriz
				int f, c; cin >> f >> c;
				matrizN = leerMatriz(f, c);
			}
			break;
		case 2:
			system("cls");
			break;
		case 3:
			system("cls");
			break;
		case 4:
			system("cls");
			break;
		case 5:
			system("cls");
			break;
		case 6:
			system("cls");
			break;
		case 7:
			system("cls");
			break;
		case 8:
			system("cls");
			break;
		default:
			system("cls");
			cout << "¡ERROR! Seleccione una opcion valida";
		}

	} while (opc != 10);

	return 0;
}

//Métodos para el cálculo

vector<vector<int>> leerMatriz(int filas, int columnas) {
	vector<vector<int>> matriz(filas, vector<int>(columnas));
	//Recorremos y leemos cada i-esima fila de cada i-esima columna de nuetsra matriz de n*m
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < columnas; j++)
			cin >> matriz[i][j];
	return matriz;
}
// este codigo es dedicado a los valiente guerreros apanecos