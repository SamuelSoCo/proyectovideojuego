#include <iostream>

using namespace std;

int main() {
    char opcion;

    do {
        // Menú principal
        cout << "\nMenú Principal:" << endl;
        cout << "a. Acción 1" << endl;
        cout << "b. Acción 2" << endl;
        cout << "c. Acción 3" << endl;
        cout << "d. Acción 4" << endl;
        cout << "e. Salir" << endl;
        cout << "Seleccione una opción (a-e): ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                // Acción 1
                cout << "\nRealizando Acción 1:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submenú " << i << ".1" << endl;
                    cout << i << ". Submenú " << i << ".2" << endl;
                    cout << i << ". Submenú " << i << ".3" << endl;
                    cout << i << ". Submenú " << i << ".4" << endl;
                    cout << i << ". Submenú " << i << ".5" << endl;
                    cout << "Seleccione una opción (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'b':
                // Acción 2
                cout << "\nRealizando Acción 2:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submenú " << i << ".1" << endl;
                    cout << i << ". Submenú " << i << ".2" << endl;
                    cout << i << ". Submenú " << i << ".3" << endl;
                    cout << i << ". Submenú " << i << ".4" << endl;
                    cout << i << ". Submenú " << i << ".5" << endl;
                    cout << "Seleccione una opción (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'c':
                // Acción 3
                cout << "\nRealizando Acción 3:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submenú " << i << ".1" << endl;
                    cout << i << ". Submenú " << i << ".2" << endl;
                    cout << i << ". Submenú " << i << ".3" << endl;
                    cout << i << ". Submenú " << i << ".4" << endl;
                    cout << i << ". Submenú " << i << ".5" << endl;
                    cout << "Seleccione una opción (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'd':
                // Acción 4
                cout << "\nRealizando Acción 4:" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << ". Submenú " << i << ".1" << endl;
                    cout << i << ". Submenú " << i << ".2" << endl;
                    cout << i << ". Submenú " << i << ".3" << endl;
                    cout << i << ". Submenú " << i << ".4" << endl;
                    cout << i << ". Submenú " << i << ".5" << endl;
                    cout << "Seleccione una opción (1-5): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'e':
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }

    } while (opcion != 'e');

    return 0;
}




	
	


	


	



