#include <iostream>

using namespace std;

int main() {
    char opcion;

    do {
        // Men� principal
        cout << "\nMen� Principal:" << endl;
        cout << "a. Acci�n 1" << endl;
        cout << "b. Acci�n 2" << endl;
        cout << "c. Acci�n 3" << endl;
        cout << "d. Acci�n 4" << endl;
        cout << "e. Salir" << endl;
        cout << "Seleccione una opci�n (a-e): ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                // Acci�n 1
                cout << "\nRealizando Acci�n 1:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submen� " << i << ".1" << endl;
                    cout << i << ". Submen� " << i << ".2" << endl;
                    cout << i << ". Submen� " << i << ".3" << endl;
                    cout << i << ". Submen� " << i << ".4" << endl;
                    cout << i << ". Submen� " << i << ".5" << endl;
                    cout << "Seleccione una opci�n (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submen�
                }
                break;

            case 'b':
                // Acci�n 2
                cout << "\nRealizando Acci�n 2:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submen� " << i << ".1" << endl;
                    cout << i << ". Submen� " << i << ".2" << endl;
                    cout << i << ". Submen� " << i << ".3" << endl;
                    cout << i << ". Submen� " << i << ".4" << endl;
                    cout << i << ". Submen� " << i << ".5" << endl;
                    cout << "Seleccione una opci�n (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submen�
                }
                break;

            case 'c':
                // Acci�n 3
                cout << "\nRealizando Acci�n 3:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submen� " << i << ".1" << endl;
                    cout << i << ". Submen� " << i << ".2" << endl;
                    cout << i << ". Submen� " << i << ".3" << endl;
                    cout << i << ". Submen� " << i << ".4" << endl;
                    cout << i << ". Submen� " << i << ".5" << endl;
                    cout << "Seleccione una opci�n (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submen�
                }
                break;

            case 'd':
                // Acci�n 4
                cout << "\nRealizando Acci�n 4:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submen� " << i << ".1" << endl;
                    cout << i << ". Submen� " << i << ".2" << endl;
                    cout << i << ". Submen� " << i << ".3" << endl;
                    cout << i << ". Submen� " << i << ".4" << endl;
                    cout << i << ". Submen� " << i << ".5" << endl;
                    cout << "Seleccione una opci�n (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submen�
                }
                break;

            case 'e':
                cout << "Saliendo del programa. �Hasta luego!" << endl;
                break;

            default:
                cout << "Opci�n no v�lida. Int�ntelo de nuevo." << endl;
        }

    } while (opcion != 'e');

    return 0;
}




	
	


	


	



