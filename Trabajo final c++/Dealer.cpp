#include <iostream>
#include "Carta.h"
#include "Jugador.h"
#include "Dealer.h"


Dealer::Dealer() {
	puntos = 0;
};

void Dealer::condicion(int puntaje, int puntajeDealer) {

	carta cartaDealer = carta();
	int ptsFinal;
	bool a; // a=0(gana jugador) a=1 (gana dealer)
	while (puntajeDealer <= 17) {
	
		ptsFinal = cartaDealer.queCarta();
		puntajeDealer = puntajeDealer + ptsFinal;
	}
	if (puntajeDealer > 21) {
		a = 0;
	}
	else if (puntajeDealer == 21) {
		a = 1;
	}
	else
	{
		while (puntajeDealer < 21) {
			if (puntaje > puntajeDealer) {
				ptsFinal = cartaDealer.queCarta();
				puntajeDealer = puntajeDealer + ptsFinal;
				
			}
			else {
				a = 1;
				break;
			}
		}
		if (puntajeDealer > 21) {
			a = 0;
		}
	}

	std::cout << std::endl;
	std::cout << "*** " << puntajeDealer << " Puntos  ***" << std::endl;

	if (a == 0) {
		std::cout << "Jugador gana!!!" << std::endl;
	}
	else {
		std::cout << "La casa gana!!!" << std::endl;
	}

}



