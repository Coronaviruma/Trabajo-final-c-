#include "Carta.h"
#include "Jugador.h"
#include <iostream>

Jugador :: Jugador() {

	puntaje = 0;

}

int Jugador::decicion(int numero) {
	int contador;									//la decicion	
	carta variable = carta();
	
	
	if (numero == 1)
	{
		numero = 11;
	}
	puntaje = puntaje + numero;

	int variable2;
	variable2 = variable.queCarta();
	if (variable2 == 1 && puntaje <= 10){
		variable2 = 11;
	}
	
	//primera carta y puntaje
	
	puntaje = puntaje + variable2;
	
	std::cout << std::endl;
	std::cout << "*** " << puntaje << " Puntos ***";
	
	std::cout << std::endl;
	std::cout << std::endl;
	

	if (puntaje > 21)
	{
		system("Color 4"); /////////////////////////////////////////////////////////
		std::cout << "Se paso... La casa gana!!";
		system("Color 7");
	}
	else if (puntaje == 21)
	{
		std::cout << "Black Jack!!!" << std::endl;
	}
	else
	{

		//1ra decicion
		std::cout << "1. Pedir" << std::endl << "2. Plantarse" << std::endl;
		std::cin >> contador;
		std::cout << std::endl;


		while (contador == 1 || contador == 2) {
			if (contador == 1)
			{
				//2da decicion
				std::cout << std::endl;
				std::cout << "Dame!" << std::endl << std::endl;

				//transformar "A"

				variable2 = variable.queCarta();
				if (variable2 == 1 && puntaje <= 10) {
					variable2 = 11;
				}

				
				puntaje = puntaje + variable2;

				std::cout << std::endl;
				std::cout << "*** " << puntaje << " Puntos ***";

				std::cout << std::endl;
				std::cout << std::endl;
				

				if (puntaje == 21)
				{
					std::cout << "Black Jack!!!" << std::endl;
					break;
				}
				else if (puntaje < 21)
				{
					std::cout << "1. Pedir" << std::endl << "2. Plantarse" << std::endl;
					std::cin >> contador;
				}
				else
				{
					system("Color 4"); 
					std::cout << "Se paso... La casa gana!!";
					break;
				}
			}
		
			else{
			break;
			}
		}
	}

	return puntaje;
}