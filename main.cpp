/* Alexander Soto Morales
CCOM3033-001 LAB3
Números Aleatorios*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

   //Inicializa función srand
    srand(time(0));

    //Se generan los 3 números aleatorios y se guarda cada uno en variable tipo int
    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;

    //Despliegue de los números generados en desorden
    cout << "Números aleatorios generados: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3 << endl;  

    //Depliegue de los números en orden descendiente

    //La condición de if y else if contiene las 6 posibilidades de combinaciones de 3 números enteros y despliega los resultados enseguida que encuentra una condición cierta

    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio3) {
        cout << "Los números ordenados son: " << numeroAleatorio1 << ", " << numeroAleatorio2 << ", " << numeroAleatorio3 << endl;

    } else if (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2) {
        cout << "Los números ordenados son: " << numeroAleatorio1 << ", " << numeroAleatorio3 << ", " << numeroAleatorio2 << endl;;

    } else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio3) {
        cout << "Los números ordenados son: " << numeroAleatorio2 << ", " << numeroAleatorio1 << ", " << numeroAleatorio3 << endl;;

    } else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1) {
        cout << "Los números ordenados son: " << numeroAleatorio2 << ", " << numeroAleatorio3 << ", " << numeroAleatorio1 << endl;;
    
    } else if (numeroAleatorio3 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio2) {
        cout << "Los números ordenados son: " << numeroAleatorio3 << ", " << numeroAleatorio1 << ", " << numeroAleatorio2 << endl;;

    } else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1) {
        cout << "Los números ordenados son: " << numeroAleatorio3 << ", " << numeroAleatorio2 << ", " << numeroAleatorio1 << endl;;
    }
    

    return 0;
}
