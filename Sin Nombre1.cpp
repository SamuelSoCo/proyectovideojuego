#include <iostream>

using namespace std;

int main() {
    char opcion;

    do {
        // Menú principal
        cout << "--------------------------------------------------------------    HP=100%" << endl;
        cout<<"-juan es ungranjero algo alto y furte pero con mala suerte"<<endl;
        cout<<"parece que va adespertar.Ahhhhh(juan desperto),ve asu alrededor"<<endl;
        cout<<"-juan:que tarde me desperte que hare hoy. "<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"que quieres que haga juan pulsa los numeros que tiene cada orden.\n";
    

        cout << "1.Dormir un poco mas. " << endl;
        cout << "2. Levantarte cambiarse de ropa y salir. "<< endl;
        cout << "3. Levantarse de la cama eir a desayunar." << endl;
        cout << "4. Ver que hay en tu chosa y que puedes hacer dentro de ella." << endl;
        cout << "5. Salir del juego." << endl;
        cout << "Seleccione una opción (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1:cout << "--------------------------------------------------------------    HP=100%" << endl;
                // Acción 1
                cout << "Ya apasado varias horas ya es como la una dela tarde,ya no desayune bueno que hare entonces :" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1-Te quieres levantar a buscar para  comer " << i << ".1" << endl;
                    cout << i << "Cambierte de ropa y salir de tu caso a ver tu campo como quedo de la lluvia de ayer\n" << i << ".2" << endl;
                    cout << i << "-Ver que puedes hacer en tu casa para pasar el rato" << i << ".3" << endl;
                    
                    
                    cout << "Seleccione una opción (1-3): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'b':
                // Acción 2
                cout << "hooo no la ropa limpia se quedo colgada afuera y como llovio no puedo cambiarme .\n:" << endl;
                cout<<"tendre que salir o desayunar mejor antes de salir\n";
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1- Desayunar pan solo" << i << ".1" << endl;
                    cout << i << "2-revisar tus cosas entes de salir" << i << ".2" << endl;
                    cout << i << "3-salir asi sin desayunar(con la misma ropa que se puede hacer) " << i << ".3" << endl;
                    
                    
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




	
	


	


	



