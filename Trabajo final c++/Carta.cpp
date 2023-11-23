#include "Carta.h"
#include <random>
#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

carta::carta(){
	numero = 0;
	palo = 0;

}
//generador de carta
int carta::queCarta() {
	random_device rd;
	int a = 0;
	string mostrarLetra;
	numero = (rd() % 13 + 1);
	a = (rd() % 4 + 3);
	palo = a;


	switch (numero)
	{
	case 1:
		mostrarLetra = 'A';
		break;
	case 2:
		mostrarLetra = '2';
		break;
	case 3:
		mostrarLetra = '3';
		break;
	case 4:
		mostrarLetra = '4';
		break;
	case 5:
		mostrarLetra = '5';
		break;
	case 6:
		mostrarLetra = '6';
		break;
	case 7:
		mostrarLetra = '7';
		break;
	case 8:
		mostrarLetra = '8';
		break;
	case 9:
		mostrarLetra = '9';
		break;
	case 10:
		mostrarLetra = "10";
		break;
	case 11:
		mostrarLetra = 'J';
		break;
	case 12:
		mostrarLetra = 'Q';
		break;
	case 13:
		mostrarLetra = 'K';
		break;
	}
	if (numero > 10)
	{
		numero = 10;
	}


	int Paint;
	if (palo == 3 || palo == 4){
		Paint = 4;
	}
	else {
		Paint = 7;
	}
	if (mostrarLetra == "10")
	{
		color(hConsole, Paint);
		cout << R"(|---------|)" << endl;
		cout << R"(|)" << mostrarLetra << palo << R"(      |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|      )" << mostrarLetra << palo << R"(|)" << endl;
		cout << R"(|---------|)" << endl;
		color(hConsole, 7);
	}
	else
	{
		color(hConsole, Paint);
		cout << R"(|---------|)" << endl;
		cout << R"(|)" << mostrarLetra << palo << R"(       |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|       )" << mostrarLetra << palo << R"(|)" << endl;
		cout << R"(|---------|)" << endl;
		color(hConsole, 7);
	}

	return numero;
}


int carta::cartaDealer() {
	random_device rd;
	int a = 0;
	string mostrarLetra;
	numero = (rd() % 13 + 1);
	a = (rd() % 4 + 3);
	palo = a;


	switch (numero)
	{
	case 1:
		mostrarLetra = 'A';
		break;
	case 2:
		mostrarLetra = '2';
		break;
	case 3:
		mostrarLetra = '3';
		break;
	case 4:
		mostrarLetra = '4';
		break;
	case 5:
		mostrarLetra = '5';
		break;
	case 6:
		mostrarLetra = '6';
		break;
	case 7:
		mostrarLetra = '7';
		break;
	case 8:
		mostrarLetra = '8';
		break;
	case 9:
		mostrarLetra = '9';
		break;
	case 10:
		mostrarLetra = "10";
		break;
	case 11:
		mostrarLetra = 'J';
		break;
	case 12:
		mostrarLetra = 'Q';
		break;
	case 13:
		mostrarLetra = 'K';
		break;
	}
	if (numero > 10)
	{
		numero = 10;
	}

	int Paint;
	if (palo == 3 || palo == 4) {
		Paint = 4;
	}
	else {
		Paint = 7;
	}
	if (mostrarLetra == "10")
	{
		color(hConsole, Paint);
		cout << R"(|---------|)" << endl;
		cout << R"(|)" << mostrarLetra << palo << R"(      |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|      )" << mostrarLetra << palo << R"(|)" << endl;
		cout << R"(|---------|)" << endl;
		color(hConsole, 7);
	
		cout << R"(|---------|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|---------|)" << endl;
	

	}
	else
	{
		color(hConsole, Paint);
		cout << R"(|---------|)" << endl;
		cout << R"(|)" << mostrarLetra << palo << R"(       |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|         |)" << endl;
		cout << R"(|       )" << mostrarLetra << palo << R"(|)" << endl;
		cout << R"(|---------|)" << endl;
		color(hConsole, 7);

		cout << R"(|---------|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|XXXXXXXXX|)" << endl;
		cout << R"(|---------|)" << endl;
	}
	return numero;
}