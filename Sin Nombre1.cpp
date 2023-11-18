#include <iostream>

using namespace std;

int main() {
    char opcion;

    do {
        // Menú principal
        cout << "-----------------------------------------------------------Arma:ninguna    HP=100%" << endl;
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
            case 1:cout << "--------------------------------------------------------------Arma:ninguna    HP=100%" << endl;
                // Acción 1
                cout << "Ya apasado varias horas ya es como la una dela tarde,ya no desayune bueno que hare entonces :" << endl;
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1-Te quieres levantar a buscar para  comer " << i << ".1" << endl;
                    cout << i << "2-Cambierte de ropa y salir de tu caso a ver tu campo como quedo de la lluvia de ayer\n" << i << ".2" << endl;
                    cout << i << "3-Ver que puedes hacer en tu casa para pasar el rato" << i << ".3" << endl;
                    
                    
                    cout << "Seleccione una opción (1-3): ";
                    cin >> opcion;
                     switch (opcion) {
            case 1:
                // Submenú 1
                int opcion;
                do {
                    cout << "---------------------------------------------------------Dinero:¿?   Arma:ninguna    HP=100%" << endl;
					cout << "parece que solo tengo pan con agua tendre que comer esto o salgo a ordeñar una vaca?" << endl;
                    cot<<"me conformo con esto o salgo a buscar otra cosa de comer o veo mi avitacion"<<endl;
                    // Agrega las opciones del submenú 1 aquí
                    cout << "1-comer el pan cambiarse de ropa y salir a ver tu campo despues de la lluvia de ayer\n" << endl;
                    cout << "2.salir a buscar otra cosa que comer." << endl;
                    cout << "3. salir a ordeñar la vaca para regresar a desayunar tu pan?" << endl;
                    cout << "Seleccione una opción: ";
                    cin >> opcion;

                    switch (opcionSubmenu1) {
                        // Agrega casos para las opciones del submenú 1
                        case 1:
                            cout << "Realizando tarea para la Opción 1 del Submenú 1." << endl;
                            break;
                        case 2:
                            cout << "Realizando tarea para la Opción 2 del Submenú 1." << endl;
                            break;
                        // Agrega más casos según sea necesario

                    }
                } while (opcionSubmenu1 != 3);
                break;

            case 2:
                // Submenú 2
                // Repite el patrón para otros submenús
                break;

            case 3:
                // Submenú 3
                // Repite el patrón para otros submenús
                break;

            case 4:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
                    // Agrega acciones para cada submenú
                }
                break;

            case 2:
                // Acción 2
                cout << "hooo no la ropa limpia se quedo colgada afuera y como llovio no puedo cambiarme .\n:" << endl;
                cout<<"tendre que salir o desayunar mejor antes de salir\n";
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1- Desayunar pan solo" << i << ".1" << endl;
                    cout << i << "2-revisar tus cosas entes de salir" << i << ".2" << endl;
                    cout << i << "3-salir asi sin desayunar(con la misma ropa que se puede hacer) " << i << ".3" << endl;
                    
                    
                    cout << "Seleccione una opción (1-3): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 3: cout << "--------------------------------------------------------------Arma:ninguna    HP=100%" << endl;
                // Acción 3
                cout << "Parese que solo tengo pan y agua, quisiera un poco de leche parael pan" << endl;
                cout<<"Saldre a ordeñar una vaca?"
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1-salir a ordeñar una vaca para desayunar con leche." << i << ".1" << endl;
                    cout << i << "2-Comer solo el pan y algo de agua para cambiarse de ropa. " << i << ".2" << endl;
                    cout << i << "3-ver que hay en tu casa y ver que otra cosa puedes hacer." << i << ".3" << endl;
                    cout << i << ". Submenú " << i << ".4" << endl;
                    cout << i << ". Submenú " << i << ".5" << endl;
                    cout << "Seleccione una opción (1-3): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 'd':cout << "--------------------------------------------------------Arma:revolver,cuchillo.   HP=100%" << endl;
                // Acción 4
                cout << "Que sorpresa tengo un libro(la biblia )pero no se nunca me gusto leer, ho mi viejo cuchillo," << endl;
                cuot<<"y mi revolver las tima que no tengo mas municion solo tengo 6 tiros,los cojere talves salga.";
                cout<<"bueno a ver que are:";
                for (int i = 1; i <= 3; ++i) {
                    cout << i << "1-Salir a comprar municion para el revolver." << i << ".1" << endl;
                    cout << i << "2-Ver que hay para desayunar y salir al campo. " << i << ".2" << endl;
                    cout << i << "3-Leer el libro un rato." << i << ".3" << endl;
                    
                    
                    cout << "Seleccione una opción (1-3): ";
                    cin >> opcion;
                    // Agrega acciones para cada submenú
                }
                break;

            case 5:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }

    } while (opcion != 'e');

    return 0;
}




	
	


	


	



