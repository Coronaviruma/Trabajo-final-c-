#pragma once
#include "Carta.h"
#include "Jugador.h"

class Dealer : public Jugador{
private:
	int puntos;

public:
	Dealer();
	void condicion(int puntaje, int puntajeDeler);

};

