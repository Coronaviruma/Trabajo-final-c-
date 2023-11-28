# Trabajo-final-Cpp-
Para el trabajo final realice un Black Jack bastante simple pero funcional, con un menu principal de tres opciones, 1(Jugar), 2(Instrucciones), 3(Salir).
El juego empieza con el movimiento del dealer, repartiendose 2 cartas, una visible y otra oculta, luego da paso al jugador dando 2 cartas principales, si sacas 21 puntos es victoria directa a la cual se le llama Black Jack.
En caso de que no sea asi podes pedir una carta tras otra para acercarte o alcanzar el numero 21, si te pasas de dicho numero perdes.
Si decidis quedarte, el dealer esta obligado a repartirse cartas hasta alcanzar los 17 puntos, si los puntos del dealer sigue siendo menor al del jugador, gana el jugador, si los puntos del dealer es mayor al del jugador y menos a 21, gana el dealer, si se pasa de los 21 pierde el dealer.

En cuanto al codigo consta de 3 clases.
1. Carta: genera una carta aleatoria y la imagen de la carta diseñada con arte ascii.
2. Jugador: hereda la cartas cartas que sean necesarias y contiene bucles y condicionales para pedir, quedarse y almacenar los puntos.
3. Dealer: hereda las cartas que sean necesarias y los puntos del jugador, declara las condiciones de victoria y derrota.

El archivo principal (Source) consta de 3 funciones.
1. Titulo: Titulo de bienvenida con arte ascii.
2. Instruciones: las instrucciones de juego.
3. Menu: se llama a todos los metodos de las clases y las funciones dichas anteriormente.
Y finalmente la funcion int main que llama la funcion menu y declara la condicion de reinicio.
