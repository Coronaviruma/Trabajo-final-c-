#pragma once
#include "Carta.h"

class Jugador : public carta
{
private:
	int puntaje;

public:
	Jugador();
	int decicion(int numero);
};
