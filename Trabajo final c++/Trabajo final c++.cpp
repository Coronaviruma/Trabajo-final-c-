#include <iostream>
#include <sstream>
#include "Carta.h" 
#include "Jugador.h"
#include "Dealer.h"

//Idea Principal: Black Jack
//1° = 4 clases 1 carta(abstracta) / numero(int) / palo(char) / arte ascii() / clases 3ras
//2° = x clases 1 carta / dealer / jugador / 3ras

//carta generador = carta();
//Jugador apostador = Jugador();
//Dealer mesa = Dealer();
//int nro;
//int pts, ptsDealer;


void title_blackjack(){ 
    std::cout << R"( /$$$$$$$ /$$       /$$$$$$   /$$$$$$ /$$   /$$    /$$$$$  /$$$$$$   /$$$$$$ /$$   /$$)" << std::endl;
    std::cout << R"(| $$__  $| $$      /$$__  $$ /$$__  $| $$  /$$/   |__  $$ /$$__  $$ /$$__  $| $$  /$$/)" << std::endl;
    std::cout << R"(| $$  \ $| $$     | $$  \ $$| $$  \__| $$ /$$/       | $$| $$  \ $$| $$  \__| $$ /$$/ )" << std::endl;
    std::cout << R"(| $$$$$$$| $$     | $$$$$$$$| $$     | $$$$$/        | $$| $$$$$$$$| $$     | $$$$$/ )" << std::endl;
    std::cout << R"(| $$__  $| $$     | $$__  $$| $$     | $$  $$   /$$  | $$| $$__  $$| $$     | $$  $$ )" << std::endl;
    std::cout << R"(| $$  \ $| $$     | $$  | $$| $$    $| $$\  $$ | $$  | $$| $$  | $$| $$    $| $$\  $$ )" << std::endl;
    std::cout << R"(| $$$$$$$| $$$$$$$| $$  | $$|  $$$$$$| $$ \  $$|  $$$$$$/| $$  | $$|  $$$$$$| $$ \  $$)" << std::endl;
    std::cout << R"(|_______/|________|__/  |__/ \______/|__/  \__/ \______/ |__/  |__/\______/ |__/  \__/)" << std::endl;
}

void instrucciones() {
    std::cout << "El Juago empieza por el Dealer, repartiendose una carta visible y una oculta." << std::endl;
    std::cout << "Procede a repartir 2 las cartas al jugador y empieza el verdadero juego, la decicion de pedir o plantarse," << std::endl;
    std::cout << std::endl;
    std::cout << "Si las dos primeras cartas suman 21, es la mejor jugada posible, y recibe el nombre de Blackjak." << std::endl;
    std::cout << "Cuando los jugadores no llegan a 21, puede pedir cartas extra para llegar, pero si se pasa de los 21 automaticamente pierde." << std::endl;
    std::cout << "Luego de tomar tu decicion (si es que no te pasaste), el Dealer revela su carta oculta y en caso de no llegar a 17pts se reparte (obligatoriamente)" << std::endl;
    std::cout << "Las cartas necesarias para llegar a 17 o pasarse de 21" << std::endl;
    std::cout << std::endl;
}

int menu() {

    carta generador = carta();
    Jugador apostador = Jugador();
    Dealer mesa = Dealer();
    int nro;
    int pts, ptsDealer;


    int accion = 0;
    std::cout << std::endl;
    std::cout << "1. Jugar " << std::endl;
    std::cout << "2. Instrucciones " << std::endl;
    std::cout << "3. Salir " << std::endl;
    std::cin >> accion;
    system("cls");

    int a = 0;

    while (accion != 1 && accion != 2 && accion != 3)
    {
        std::cout << "Comando no valido. Reingrese" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Jugar " << std::endl;
        std::cout << "2. Instrucciones " << std::endl;
        std::cout << "3. Salir " << std::endl;
        std::cin >> accion;
        system("cls");
    }
    while (accion != 3 && accion == 1 || accion == 2) {
        
        if (accion == 1)
        {
            a = a + accion;
            //primera carta del dealer y 2da dada vuelta
            std::cout << "Carta del Dealer" << std::endl;
            ptsDealer = generador.cartaDealer();
            std::cout << std::endl;
            std::cout << "*** " << ptsDealer << " Puntos ***";
            std::cout << std::endl;
            std::cout << std::endl;

            //carta del jugador
            std::cout << "Carta del jugador" << std::endl;
            nro = generador.queCarta();

            //decicion del jugador
            pts = apostador.decicion(nro);

            if (pts < 21) {
                std::cout << "Carta del Dealer" << std::endl;
                //condiciones de victoria o derrota segun el dealer
                mesa.condicion(pts, ptsDealer);
            }
            accion = 3;
        }
        else
        {
        instrucciones();
        system("pause");
        system("cls");
        std::cout << std::endl;
        std::cout << "1. Jugar " << std::endl;
        std::cout << "2. Instrucciones " << std::endl;
        std::cout << "3. Salir " << std::endl;
        std::cin >> accion;
        system("cls");
        }
        //revisar (no va aca)
        /*std::cout << std::endl;
        std::cout << "1. Jugar " << std::endl;
        std::cout << "2. Instrucciones " << std::endl;
        std::cout << "3. Salir " << std::endl;
        std::cin >> accion;
        system("cls");*/
    }  
    return a;
}


int main()
{
    title_blackjack();
    char opcion;
    int accion;
    accion = menu();

    if (accion == 1)
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Queres volver a jugar? (s/n)";
        std::cin >> opcion;
        while (opcion != 's' && opcion != 'n') {
            std::cout << "Comando no valido. Reingrese" << std::endl;
            std::cout << std::endl;
            std::cout << "Queres volver a jugar? (s/n)";
            std::cin >> opcion;
        }

        while (opcion != 'n') {
            system("cls");
            accion = menu();
            std::cout << "Queres volver a jugar? (s/n)";
            std::cin >> opcion;
            while (opcion != 's' && opcion != 'n') {
                std::cout << "Comando no valido. Reingrese" << std::endl;
                std::cout << std::endl;
                std::cout << "Queres volver a jugar? (s/n)";
                std::cin >> opcion;
            }
        }
    }
    std::cout << "Gracias por jugar!!!" << std::endl << "Hasta la proxima..." << std::endl << std::endl;

    return 0;
}
