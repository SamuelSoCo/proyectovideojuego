
#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int opcion;

    cout << "¡Bienvenido al juego interactivo!" << endl;

    do {
        // Menú principal
      system("color fd");
      cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%  |" << endl;
        cout<<"|-juan es ungranjero algo alto y furte pero con mala suerte                         |"<<endl;
        cout<<"|parece que va adespertar.Ahhhhh(juan desperto),ve asu alrededor                    |"<<endl;
        cout<<"|-juan:que tarde me desperte que hare hoy.                                          | "<<endl;
        cout<<"|-----------------------------------------------------------------------------------| "<<endl;
        cout<<"|que quieres que haga juan pulsa los numeros que tiene cada orden.\n                |"<<endl;
        cout<<"|------------------------------------------------------------------------------------|"<<endl;
    

        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100% |" << endl;
		cout << "|1.Dormir un poco mas.                                                             |" << endl;
        cout << "|2. Levantarte cambiarse de ropa y salir.                                          |"<< endl;
        cout << "|3. Levantarse de la cama eir a desayunar.                                         |" << endl;
        cout << "|4. Ver que hay en tu chosa y que puedes hacer dentro de ella.                     |" << endl;
        cout << "|5. Salir del juego.                                                               |" << endl;
        cout << "|Seleccione una opción (1-5).                                                      | ";
        cout << "|------------------------------------------------------------------------------------"<<endl;
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:// principal caso
                  // Acción 1
                cout <<" |-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
                cout <<" |Ya apasado varias horas ya es como la una dela tarde,ya no desayune bueno que hare entonces :" << endl;
                cout <<" |1-Te quieres levantar a buscar para  comer\n " << endl;
                cout <<" |2-ver el campo por la lluvia de ayer\n"  << endl;
                cout <<" |3-Ver que puedes hacer en tu casa para pasar el rato\n"<<endl; 
                cout << "|Seleccione una opción (1-3): ";
                cout << "|5. Salir del juego." << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl; 
                cin >> opcion;
                system("cls");//1
                
                                  do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100% " << endl;
        cout << "|(juan mejor revisa su alasena)pan y agua para deayunar si quiero leche tendre que salir fuera:"<<endl;
        cout << "|1.-Salir a ordeñar una vaca para tener leche para el pan\n."  << endl;
        cout << "|2-Quedarse en casa y comer el pan con solo agua." << endl;
        cout << "|3-No desayunar y cambiarse y salir." << endl;
        cout << "|Seleccione una opción (1-3):"  << endl;
        cout << "|5. Salir del juego." << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan sale)hooo no esa lluvia acavo con mi plantacion de maiz ahora tenre que sembrar?"<<endl;
                cout << "|bueno a buscar la vaca o como el pan y me pongo a limpiar el terreno para sembrar:"<<endl;
                cout << "|1.-buscar la vaca para ordeñar y desayunar el pan con leche."<<endl;
                cout << "|2.-Quedarte en casa desayunar y salir de la casa."<<endl;
                cout << "|3.-Ir a trabajar sin desallunar para tener luego dinero."<<endl;
                cout << "|Seleccione una opción (1-3):"  << endl; 
                cout << "|5. Salir del juego." << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout << "|(juan salio de su casa) a que lluvia la de anoche, parece que perdi mi maiz"<<endl;
        cout << "|adonde estara mi vaca la buscare o veo que encuentro en el pueblo:"<<endl;
        cout << "|1.busca la vaca en el bosque"<<endl;
        cout << "|2.ir al bosque a ver que frutos hay."<<endl;
        cout << "|3.exploremos el bosque por curiosidad."<<endl;
        cout << "|Seleccione una opción (1-3):"  << endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|juan en el bosque no encontro ala vaca pero hay un rio"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|seleciones una opcion de (1-3)"<<endl;
                cout << "|5.salir del juego"<<endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout <<" |(juan piensa un rato)el rio tiene corriente fuerte,creo que no hay ningun puente"<<endl;
        cout << "|creo que explorere mejor un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva" << endl;
        cout << "|3. Buscar un arbol de futa"<<endl;
        cout << "|selecione una opcion de (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan reflexiona)creo que el rio tiene corriente fuerte,y no veo ningun puente"<<endl;
                cout << "|mejor reviso el area un rato:"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. caminar en la orilla del rio"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se dice a si mismo)creo que el rio esta muy caudaloso por las lluvias"<<endl;
                cout << "|creo que mejor camino por esta zona:"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar nadar"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se queda pensando)que lluvia de ayer dejo con un caudal furte al rio"<<endl;
                cout << "|mejor estoy por aqui no veo ningun puento para que intento crusar"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar pescar"<<endl;
                cout << "|3. contemplar el rio"<<endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan camina en el bosque)juan camina pero no ve la vaca, pero hay una cueva"<<endl;
            	cout << "|sera que esta la vaca en la cueva:"<<endl;
                cout << "|Entras en la cueva y te encuentras con dos pasillos. ¿Hacia dónde vas?" << endl;
                cout << "|1. Hacia la izquierda" << endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. Salir de la cueva" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan en el bosque olle ruido)juan que esta pasando en  el arbusto"<<endl;
            	cout << "|hooo!, un monstruo maldicion que hago."<<endl;
                cout << "|Te enfrentas a un monstruo. ¿Cómo decides atacar?" << endl;
                cout << "|1. intentar pegarle con la mano."<<endl;
                cout << "|2. Lanzar alguna piedra o palo del suelo."<<endl;
                cout << "|3. Intentar huir" << endl;
                cout << "|Seleccione una opción (1-3):"  << endl;
				cout << "|5. Salir del juego." << endl; 
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
                
        }

    } while (opcion != 5);
                break;
            case 2://subpri
            	cout<< "|-----------------------------------------------dinero:?   Arma:revolver    HP=100%" << endl;
                cout <<"|Donde quedaria la vaca esa vaca se fue del establo alo mejor esta en el bosque:"<< endl;
                cout <<"|1.-Buscar la vaca en el bosque(se ve peligroso)."<<endl;
                cout<< "|2.-Ir ala casa aver si hay alguna arma para ir al bosque."<<endl;
                cout <<"|3-.comer el pan solo con agua y ver que se puede hacer en la casa."<<endl;
                cout <<"|Seleccione una opción (1-3):"  << endl; 
                cout <<"|5. Salir del juego." << endl;
                cout <<"|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout << "|(juan salio de su casa) a que lluvia la de anoche, parece que perdi mi maiz"<<endl;
        cout << "|adonde estara mi vaca la buscare o veo que encuentro en el pueblo:"<<endl;
        cout << "|1.busca la vaca en el bosque"<<endl;
        cout << "|2.ir al bosque a ver que frutos hay."<<endl;
        cout << "|3.exploremos el bosque por curiosidad."<<endl;
        cout << "|Seleccione una opción (1-3):"  << endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|juan en el bosque no encontro ala vaca pero hay un rio"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|seleciones una opcion de (1-3)"<<endl;
                cout << "|5.salir del juego"<<endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout <<" |(juan piensa un rato)el rio tiene corriente fuerte,creo que no hay ningun puente"<<endl;
        cout << "|creo que explorere mejor un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva" << endl;
        cout << "|3. Buscar un arbol de futa"<<endl;
        cout << "|selecione una opcion de (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan reflexiona)creo que el rio tiene corriente fuerte,y no veo ningun puente"<<endl;
                cout << "|mejor reviso el area un rato:"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. caminar en la orilla del rio"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se dice a si mismo)creo que el rio esta muy caudaloso por las lluvias"<<endl;
                cout << "|creo que mejor camino por esta zona:"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar nadar"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se queda pensando)que lluvia de ayer dejo con un caudal furte al rio"<<endl;
                cout << "|mejor estoy por aqui no veo ningun puento para que intento crusar"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar pescar"<<endl;
                cout << "|3. contemplar el rio"<<endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan camina en el bosque)juan camina pero no ve la vaca, pero hay una cueva"<<endl;
            	cout << "|sera que esta la vaca en la cueva:"<<endl;
                cout << "|Entras en la cueva y te encuentras con dos pasillos. ¿Hacia dónde vas?" << endl;
                cout << "|1. Hacia la izquierda" << endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. Salir de la cueva" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan en el bosque olle ruido)juan que esta pasando en  el arbusto"<<endl;
            	cout << "|hooo, un monstruo maldicion que hago."<<endl;
                cout << "|Te enfrentas a un monstruo. ¿Cómo decides atacar?" << endl;
                cout << "|1. intentar pegarle con la mano."<<endl;
                cout << "|2. Lanzar alguna piedra o palo del suelo."<<endl;
                cout << "|3. Intentar huir" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
                
        }

    } while (opcion != 5);
                break;
                break;
            case 3://subpri
            	cout << "|-----------------------------------------------dinero:?   Arma:revolver  HP=80%" << endl;
            	cout << "|juan sale de la casa y escucha ruidos, que es eso que diablos es un mounstruo"<<endl;
                cout << "|Te enfrentas a un monstruo. ¿Cómo decides atacar?" << endl;
                cout << "|1. Utilizar tu revolver."<<endl;
                cout << "|2. Lanzar piedras o ramas."<<endl;
                cout << "|3. Intentar huir" << endl;
                cout << "|Seleccione una opción (1-3):"<< endl;
                cout << "|5. Salir del juego." << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout << "|(juan salio de su casa) a que lluvia la de anoche, parece que perdi mi maiz"<<endl;
        cout << "|adonde estara mi vaca la buscare o veo que encuentro en el pueblo:"<<endl;
        cout << "|1.busca la vaca en el bosque"<<endl;
        cout << "|2.ir al bosque a ver que frutos hay."<<endl;
        cout << "|3.exploremos el bosque por curiosidad."<<endl;
        cout << "|Seleccione una opción (1-3):"  << endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|juan en el bosque no encontro ala vaca pero hay un rio"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|seleciones una opcion de (1-3)"<<endl;
                cout << "|5.salir del juego"<<endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout << "|(juan piensa un rato)el rio tiene corriente fuerte,creo que no hay ningun puente"<<endl;
        cout << "|creo que explorere mejor un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva" << endl;
        cout << "|3. Buscar un arbol de futa"<<endl;
        cout << "|selecione una opcion de (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan reflexiona)creo que el rio tiene corriente fuerte,y no veo ningun puente"<<endl;
                cout << "|mejor reviso el area un rato:"<<endl;
                cout << "|1. Cruzar el río nadando" << endl;
                cout << "|2. caminar en la orilla del rio"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se dice a si mismo)creo que el rio esta muy caudaloso por las lluvias"<<endl;
                cout << "|creo que mejor camino por esta zona:"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar nadar"<<endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|(juan se queda pensando)que lluvia de ayer dejo con un caudal furte al rio"<<endl;
                cout << "|mejor estoy por aqui no veo ningun puento para que intento crusar"<<endl;
                cout << "|1. Retroceder y explorar otra área" << endl;
                cout << "|2. intentar pescar"<<endl;
                cout << "|3. contemplar el rio"<<endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan camina en el bosque)juan camina pero no ve la vaca, pero hay una cueva"<<endl;
            	cout << "|sera que esta la vaca en la cueva:"<<endl;
                cout << "|Entras en la cueva y te encuentras con dos pasillos. ¿Hacia dónde vas?" << endl;
                cout << "|1. Hacia la izquierda" << endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. Salir de la cueva" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
            	cout << "|(juan en el bosque olle ruido)juan que esta pasando en  el arbusto"<<endl;
            	cout << "|hooo, un monstruo maldicion que hago."<<endl;
                cout << "|Te enfrentas a un monstruo. ¿Cómo decides atacar?" << endl;
                cout << "|1. intentar pegarle con la mano."<<endl;
                cout << "|2. Lanzar alguna piedra o palo del suelo."<<endl;
                cout << "|3. Intentar huir" << endl;
                cout << "|selecione una opcion de (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
                
        }

    } while (opcion != 5);
                break;
                break;
            
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:// principal casolllllllll
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
                cout << "|(juan abre la puerta)Lo sospeche la lluvia acabo con todo el maiz"<< endl;
                cout << "|tendre que volver a limpiar el terreno y arar la tierra o busco a mi vaca:" << endl;
                cout << "|1.-Limpiar el terreno y volver arar la tierra para sembrar." << endl;
                cout << "|2.-Buscar la vaca en el establo para ordeñar."<<endl;
                cout << "|3.-Regresar a casa y ver que hay para desayunar."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                do {// caso 2.1
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
        cout << "|(juan vio el terreno y prefirio sembrar)si no siembro"<<endl;
        cout << "|no tendre dinero la vaca puede esparar:"<<endl;
        cout << "|1.-limpiar el terreno para tener luego dinero."<<endl;
        cout << "|2.-(se escucha un ruido revisar entre el pasto)"<<endl;
        cout << "|3.-(caminar por tu sembradio destruido un rato)."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=60%" << endl;
                cout << "|(Juan empiesa a limpiar el terreno y lo muerde una vivora)" << endl;
                cout << "|maldicion tendre que intentar currarme o ir al pueblo." << endl;
                cout << "|1.-Ir ala casa y curarse solo(es peligroso)." << endl;
                cout << "|2.-Curarse en el campo(subcionar el veneno)."<<endl;
                cout << "|3.-Buscar un caballo para ir al pueblo."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {// 2 tercera iteracion
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=60%" << endl;
        cout << "|(juan al ser mordido por uan vivora escondida se desmayo)haaa parece que me esta aciendo efecto el veneno,subcionare el veneno"<<endl;
        cout << "|juan se sienta mal pero camina hasta su casay entra"<<endl;
        cout << "|1.recostarse en la cama y descansar"<<endl;
        cout << "|2.descansar en el piso para no moverte mas."<<endl;
        cout << "|3.Resar y esperar lo mejor."<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|(juan no se leventa)que firbre tengo y dolor tendre que esperar que recuerdos tengo"<<endl;
                cout << "|sera que morire bueno que sea lo que quiera:"<<endl;
                cout << "|1.rezar un rato y descansar."<<endl;
                cout << "|2.recordar cosas de los padres y amigos"<<endl;
                cout << "|3.levanatrte de la cama y buscar un doctor"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
        cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
        cout << "|creo que ya me puedo levantar, intentare sali e ir al pueblo por un  doctor"<<endl;
        cout << "|(juan abrio la puerta y busco su caballo pero no lo encontro)"<<endl;
        cout << "|1. Avanzar con el vecino mas cercano"<<endl;
        cout << "|2. Llamar el caballo y esperar a que regrese"<<endl;
        cout << "|3. Caminar al pueblo"<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|parece que estoy mejor y me puedo levantar,saldre para ir al pueblo por un doctor"<<endl;
                cout << "|es mejor prevenir(juan salio de su casa llamo a su caballo pero no vino)"<<endl;
                cout << "|1.Caminar hacia el vecino mas cercano"<<endl;
                cout << "|2. Llamar al caballo y esperar su regreso"<<endl;
                cout << "|3. Ir al pueblo a pie"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|espero que este el doctor(juan salio busco el caballo y no lo vio)"<<endl;
                cout << "|1.llamar caballo y esperar"<<endl;
                cout << "|2.Caminar hacia el pueblo"<<endl;
                cout << "|3.Caminar con tu vecino mas proximo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|bueno en marcha(salio juan de la casa)donde esta mi caballo:"<<endl;
                cout << "|1.Buscar el caballo alrededor"<<endl;
                cout << "|2.ir al pueblo a pata"<<endl;
                cout << "|3.Visitar al vecino a ver si vio el caballo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|me siento aun mal pero no pasa la fiebre y el dolor no pasa"<<endl;
                cout << "|espero que se pase rapido para ir al pueblo por un doctor."<<endl;
                cout << "|1.esperar y ver que pasa,para ir al pueblo"<<endl;
                cout << "|2.salir para ir al pueblo por un doctor."<<endl;
                cout << "|3.levantarse y acostarse en la cama."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|espero que dios me escuvhe y me ayude,siento que pasa el efecto"<<endl;
                cout << "|creo que puedo salir a buscar unndoctor:"<<endl;
                cout << "|1.Levantarse y salir al pueblo por un doctor."<<endl;
                cout << "|2.esperar a que pase el efecto y salir."<<endl;
                cout << "|3.leer algo o comer hasta que pase el efecto."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2://2.1
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|Juan busco y no enconro a su vaca que hare tendre que buscarla o regreso a desayunar:"<<endl;
            	cout << "|la buscare, en el bosque,ho una cueva."<<endl;
                cout << "|Entras en la cueva y te encuentras con dos pasillos. ¿Hacia dónde vas?" << endl;
                cout << "|1. Hacia la izquierda" << endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. Salir de la cueva" << endl;
                cout << "|Seleccione una opción (1-3):"<< endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {// 2 tercera iteracion
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=60%" << endl;
        cout << "|(juan al ser mordido por uan vivora escondida se desmayo)haaa parece que me esta aciendo efecto el veneno,subcionare el veneno"<<endl;
        cout << "|juan se sienta mal pero camina hasta su casay entra"<<endl;
        cout << "|1.recostarse en la cama y descansar"<<endl;
        cout << "|2.descansar en el piso para no moverte mas."<<endl;
        cout << "|3.Resar y esperar lo mejor."<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|(juan no se leventa)que firbre tengo y dolor tendre que esperar que recuerdos tengo"<<endl;
                cout << "|sera que morire bueno que sea lo que quiera:"<<endl;
                cout << "|1.rezar un rato y descansar."<<endl;
                cout << "|2.recordar cosas de los padres y amigos"<<endl;
                cout << "|3.levanatrte de la cama y buscar un doctor"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
        cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
        cout << "|creo que ya me puedo levantar, intentare sali e ir al pueblo por un  doctor"<<endl;
        cout << "|(juan abrio la puerta y busco su caballo pero no lo encontro)"<<endl;
        cout << "|1. Avanzar con el vecino mas cercano"<<endl;
        cout << "|2. Llamar el caballo y esperar a que regrese"<<endl;
        cout << "|3. Caminar al pueblo"<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|parece que estoy mejor y me puedo levantar,saldre para ir al pueblo por un doctor"<<endl;
                cout << "|es mejor prevenir(juan salio de su casa llamo a su caballo pero no vino)"<<endl;
                cout << "|1.Caminar hacia el vecino mas cercano"<<endl;
                cout << "|2. Llamar al caballo y esperar su regreso"<<endl;
                cout << "|3. Ir al pueblo a pie"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|espero que este el doctor(juan salio busco el caballo y no lo vio)"<<endl;
                cout << "|1.llamar caballo y esperar"<<endl;
                cout << "|2.Caminar hacia el pueblo"<<endl;
                cout << "|3.Caminar con tu vecino mas proximo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|bueno en marcha(salio juan de la casa)donde esta mi caballo:"<<endl;
                cout << "|1.Buscar el caballo alrededor"<<endl;
                cout << "|2.ir al pueblo a pata"<<endl;
                cout << "|3.Visitar al vecino a ver si vio el caballo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|me siento aun mal pero no pasa la fiebre y el dolor no pasa"<<endl;
                cout << "|espero que se pase rapido para ir al pueblo por un doctor."<<endl;
                cout << "|1.esperar y ver que pasa,para ir al pueblo"<<endl;
                cout << "|2.salir para ir al pueblo por un doctor."<<endl;
                cout << "|3.levantarse y acostarse en la cama."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|espero que dios me escuvhe y me ayude,siento que pasa el efecto"<<endl;
                cout << "|creo que puedo salir a buscar unndoctor:"<<endl;
                cout << "|1.Levantarse y salir al pueblo por un doctor."<<endl;
                cout << "|2.esperar a que pase el efecto y salir."<<endl;
                cout << "|3.leer algo o comer hasta que pase el efecto."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                break;
            case 3://2.1
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna   HP=100%" << endl;
            	cout << "|Bueno en mi casa aver que como parece que solo hay un troso de pan y algo de agua "<<endl;
                cout << "|o buelvo a salir a ordeñar mi vaca y comer mi pan con leche:"<<endl;
                cout << "|1. Comer tu pan con algo de agua."<<endl;
                cout << "|2. Revisar tu casa aver que puedes hacer."<<endl;
                cout << "|3. hay ruido afuera salir a envestigar."<<endl;
                cout << "|Seleccione una opción (1-3):"<< endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {// 2 tercera iteracion
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=60%" << endl;
        cout << "|(juan al ser mordido por uan vivora escondida se desmayo)haaa parece que me esta aciendo efecto el veneno,subcionare el veneno"<<endl;
        cout << "|juan se sienta mal pero camina hasta su casay entra"<<endl;
        cout << "|1.recostarse en la cama y descansar"<<endl;
        cout << "|2.descansar en el piso para no moverte mas."<<endl;
        cout << "|3.Resar y esperar lo mejor."<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|(juan no se leventa)que firbre tengo y dolor tendre que esperar que recuerdos tengo"<<endl;
                cout << "|sera que morire bueno que sea lo que quiera:"<<endl;
                cout << "|1.rezar un rato y descansar."<<endl;
                cout << "|2.recordar cosas de los padres y amigos"<<endl;
                cout << "|3.levanatrte de la cama y buscar un doctor"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
        cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
        cout << "|creo que ya me puedo levantar, intentare sali e ir al pueblo por un  doctor"<<endl;
        cout << "|(juan abrio la puerta y busco su caballo pero no lo encontro)"<<endl;
        cout << "|1. Avanzar con el vecino mas cercano"<<endl;
        cout << "|2. Llamar el caballo y esperar a que regrese"<<endl;
        cout << "|3. Caminar al pueblo"<<endl;
        cout << "|seleccione una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|parece que estoy mejor y me puedo levantar,saldre para ir al pueblo por un doctor"<<endl;
                cout << "|es mejor prevenir(juan salio de su casa llamo a su caballo pero no vino)"<<endl;
                cout << "|1.Caminar hacia el vecino mas cercano"<<endl;
                cout << "|2. Llamar al caballo y esperar su regreso"<<endl;
                cout << "|3. Ir al pueblo a pie"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|espero que este el doctor(juan salio busco el caballo y no lo vio)"<<endl;
                cout << "|1.llamar caballo y esperar"<<endl;
                cout << "|2.Caminar hacia el pueblo"<<endl;
                cout << "|3.Caminar con tu vecino mas proximo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5.Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=70%"<<endl;
                cout << "|(juan se durmio y luego de unas horas desperto aun que algo mareado)"<<endl;
                cout << "|gracias a dios me puedo levantar,ire al pueblo para verificar que este bien"<<endl;
                cout << "|bueno en marcha(salio juan de la casa)donde esta mi caballo:"<<endl;
                cout << "|1.Buscar el caballo alrededor"<<endl;
                cout << "|2.ir al pueblo a pata"<<endl;
                cout << "|3.Visitar al vecino a ver si vio el caballo"<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|me siento aun mal pero no pasa la fiebre y el dolor no pasa"<<endl;
                cout << "|espero que se pase rapido para ir al pueblo por un doctor."<<endl;
                cout << "|1.esperar y ver que pasa,para ir al pueblo"<<endl;
                cout << "|2.salir para ir al pueblo por un doctor."<<endl;
                cout << "|3.levantarse y acostarse en la cama."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=?" << endl;
                cout << "|espero que dios me escuvhe y me ayude,siento que pasa el efecto"<<endl;
                cout << "|creo que puedo salir a buscar unndoctor:"<<endl;
                cout << "|1.Levantarse y salir al pueblo por un doctor."<<endl;
                cout << "|2.esperar a que pase el efecto y salir."<<endl;
                cout << "|3.leer algo o comer hasta que pase el efecto."<<endl;
                cout << "|seleccione una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                break;
            
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 3:// principal caso
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" <<endl;
                cout << "|Ho mi pequeña casa, mi revolver vere cuantas balas tengo,solo 6 tendre "  << endl;
                cout << "|que salir a comprar balas (juan coge el revolver)bueno pero desayuno primero" << endl;
                cout << "|1.-Salir a comprar balas para el revolver" << endl;
                cout << "|2.-Ver que hay para desayunar en la casa" <<endl;
                cout << "|3.-Ver que mas hay en la casa para hacer" <<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego." << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                do {
        // Menú principal
        cout << "-----------------------------------------------dinero:?   Arma:revolver   HP=100%" << endl;
        cout << "|(juan sale de su casa)veamos como quedo el campo por la lluvia"<<endl;
        cout << "|maldicion se acavo mi plantacion y mi establo, donde estara la mi vaca:"<<endl;
        cout << "|1.Salir a buscar la vaca"<<endl;
        cout << "|2.limpiar el terreno para sembrar"<<endl;
        cout << "|3.seguir el camino al pueblo por balas."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|juan busca por el alrededor y no ve nada,tendre que ir al bosque no queda de otra"<<endl;
            	cout << "|busca pistas y ve huelas, se escucha un rio:"<<endl;
                cout << "|1.caminas por el boque encuentyras un rio." << endl;
                cout << "|2.sigues la huellas de la vaca."<<endl;
                cout << "|3.seguir explorando el bosque o regresar a casa."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin >>opcion;
                system("cls");
                 do {
        // Menú principalcopisar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
        cout << "|(juan esta en el bosque)no encuentro esa vaca escucho un rio, ire a ver si pesco:"<<endl;
        cout << "|1. buscar un palo para pescar o intentar a trapar un pes."<<endl;
        cout << "|2. Ir al rio para bañarte y pescar."<<endl;
        cout << "|3. buscar otro rato la vaca."<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|Caminas por el bosque y encuentras un río. " << endl;
                cout << "|(juan ve bien el rio y piensa)que que es arriesgado acercarse a el pero"<<endl;
                cout << "|puede ser que pueda pescar,la vaca puede esperar un rato"<<endl;
                cout << "|1.Esperar hasta atrapar un pez"<<endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
        cout << "|(juan encontro el rio y lo observa)esta caudaloso es alriesgado nadar?,"<<endl;
        cout << "|pero se puede pescar, la vaca puede esperar un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva cercana al rio"<<endl;
        cout << "|3.intentas pescar a ver si cai un pez"<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan prefiere no arriegarse)y mejor busca un arbol frutal y a si vaca de paso"<<endl;
                cout << "|buscare alrededor del rio:"<<endl;
                cout << "|1. Ver que arboles tienen fruta"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso"<<endl;
                cout << "|3. regresar a casa ya es tarde"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan no quiere arriesgarse)creo que mejor busco un arbol frutal"<<endl;
                cout << "|puede ser que encuentre la vaca en el trancurso la buscare por el rio:"<<endl;
                cout << "|1. Intentar regresar a la casa ya es tarde"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso para comer"<<endl;
                cout << "|3. fijarte en los arboles a ver si tienen fruta y aver si ves la vaca"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout <<"|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan se detiene y piensa)creo que mejor busco una fruta no es tan arriesgado"<<endl;
                cout << "|puede ser que encuentre la vaca en el transcurso:"<<endl;
                cout << "|1. se escucha ruidos ver que son"<<endl;
                cout << "|2. revisar los arboles para comida y si ves a tu vaca"<<endl;
                cout << "|3. Buscar cerca del rio y alguna fruta para comer"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|(juan camina y ve una cueva)no seve peligroso mejor no entro:"<<endl;
                cout << "|que bueno que junte ese palo estoy en el rio ire a pescar."<<endl;
                cout << "|1.pesca."<<endl;
                cout << "|2. Bañarse y pescar luego."<<endl;
                cout << "|3. caminar por la orilla del rio un rato."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
                cout << "|que rio tengo hambre y estoy sucio:"<<endl;
                cout << "|1. (juan esta en el rio)que rio tan  bonito pescare y me bañare."<<endl;
                cout << "|2. Revisar si hay algo de comer serca del rio o un pescado."<<endl;
                cout << "|3. nadar un rato y pescar."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna HP:100% "<<endl;
                cout << "|me costara trabajo pero limpiemos y aremos el terreno para tener dinero:"<<endl;
                cout << "|ya es tarde creo que ire a comer:"<<endl;
                cout << "|1. regresar a casa y comer."<<endl;
                cout << "|2. buscar la vaca paro ordeñar."<<endl;
                cout << "|3. comtemplar el la puesta de sol."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");//revison
                  do {
        // Menú principalcopisar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
        cout << "|(juan esta en el bosque)no encuentro esa vaca escucho un rio, ire a ver si pesco:"<<endl;
        cout << "|1. buscar un palo para pescar o intentar a trapar un pes."<<endl;
        cout << "|2. Ir al rio para bañarte y pescar."<<endl;
        cout << "|3. buscar otro rato la vaca."<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;
 
        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|Caminas por el bosque y encuentras un río. " << endl;
                cout << "|(juan ve bien el rio y piensa)que que es arriesgado acercarse a el pero"<<endl;
                cout << "|puede ser que pueda pescar,la vaca puede esperar un rato"<<endl;
                cout << "|1.Esperar hasta atrapar un pez"<<endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
        cout << "|(juan encontro el rio y lo observa)esta caudaloso es alriesgado nadar?,"<<endl;
        cout << "|pero se puede pescar, la vaca puede esperar un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva crecana al rio"<<endl;
        cout << "|3.intentas pescar a ver si cai un pez"<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan prefiere no arriegarse)y mejor busca un arbol frutal y a si vaca de paso"<<endl;
                cout << "|buscare alrededor del rio:"<<endl;
                cout << "|1. Ver que arboles tienen fruta"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso"<<endl;
                cout << "|3. regresar a casa ya es tarde"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan no quiere arriesgarse)creo que mejor busco un arbol frutal"<<endl;
                cout << "|puede ser que encuentre la vaca en el trancurso la buscare por el rio:"<<endl;
                cout << "|1. Intentar regresar a la casa ya es tarde"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso para comer"<<endl;
                cout << "|3. fijarte en los arboles a ver si tienen fruta y aver si ves la vaca"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan se detiene y piensa)creo que mejor busco una fruta no es tan arriesgado"<<endl;
                cout << "|puede ser que encuentre la vaca en el transcurso:"<<endl;
                cout << "|1. se escucha ruidos ver que son"<<endl;
                cout << "|2. revisar los arboles para comida y si ves a tu vaca"<<endl;
                cout << "|3. Buscar cerca del rio y alguna fruta para comer"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|(juan camina y ve una cueva)no seve peligroso mejor no entro:"<<endl;
                cout << "|que bueno que junte ese palo estoy en el rio ire a pescar."<<endl;
                cout << "|1.pesca."<<endl;
                cout << "|2. Bañarse y pescar luego."<<endl;
                cout << "|3. caminar por la orilla del rio un rato."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
                cout << "|que rio tengo hambre y estoy sucio:"<<endl;
                cout << "|1. (juan esta en el rio)que rio tan  bonito pescare y me bañare."<<endl;
                cout << "|2. Revisar si hay algo de comer serca del rio o un pescado."<<endl;
                cout << "|3. nadar un rato y pescar."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                
                break;
            case 3:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna HP:100%"<<endl;
                cout << "|este camino esta feo no sera (sale unlobo) que suerte y yo que no traigo nada:"<<endl;
                cout << "|1. buscar una piedra para lansarle."<<endl;
                cout << "|2. Buscar en tus bolsillo aver que traes."<<endl;
                cout << "|3. intenta huir del lobo."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                  do {
        // Menú principalcopisar
        cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
        cout << "|(juan esta en el bosque)no encuentro esa vaca escucho un rio, ire a ver si pesco:"<<endl;
        cout << "|1. buscar un palo para pescar o intentar a trapar un pes."<<endl;
        cout << "|2. Ir al rio para bañarte y pescar."<<endl;
        cout << "|3. buscar otro rato la vaca."<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|Caminas por el bosque y encuentras un río. " << endl;
                cout << "|(juan ve bien el rio y piensa)que que es arriesgado acercarse a el pero"<<endl;
                cout << "|puede ser que pueda pescar,la vaca puede esperar un rato"<<endl;
                cout << "|1.Esperar hasta atrapar un pez"<<endl;
                cout << "|2. Buscar un puente cercano" << endl;
                cout << "|3. Retroceder y explorar otra área" << endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
        cout << "|(juan encontro el rio y lo observa)esta caudaloso es alriesgado nadar?,"<<endl;
        cout << "|pero se puede pescar, la vaca puede esperar un rato:"<<endl;
        cout << "|1. Avanzar por el bosque" << endl;
        cout << "|2. Explorar una cueva crecana al rio"<<endl;
        cout << "|3.intentas pescar a ver si cai un pez"<<endl;
        cout << "|selecciona una opcion(1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan prefiere no arriegarse)y mejor busca un arbol frutal y a si vaca de paso"<<endl;
                cout << "|buscare alrededor del rio:"<<endl;
                cout << "|1. Ver que arboles tienen fruta"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso"<<endl;
                cout << "|3. regresar a casa ya es tarde"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan no quiere arriesgarse)creo que mejor busco un arbol frutal"<<endl;
                cout << "|puede ser que encuentre la vaca en el trancurso la buscare por el rio:"<<endl;
                cout << "|1. Intentar regresar a la casa ya es tarde"<<endl;
                cout << "|2. Buscar cerca del rio la vaca y fruta de paso para comer"<<endl;
                cout << "|3. fijarte en los arboles a ver si tienen fruta y aver si ves la vaca"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:rama HP:100%"<<endl;
                cout << "|(juan se detiene y piensa)creo que mejor busco una fruta no es tan arriesgado"<<endl;
                cout << "|puede ser que encuentre la vaca en el transcurso:"<<endl;
                cout << "|1. se escucha ruidos ver que son"<<endl;
                cout << "|2. revisar los arboles para comida y si ves a tu vaca"<<endl;
                cout << "|3. Buscar cerca del rio y alguna fruta para comer"<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|(juan camina y ve una cueva)no seve peligroso mejor no entro:"<<endl;
                cout << "|que bueno que junte ese palo estoy en el rio ire a pescar."<<endl;
                cout << "|1.pesca."<<endl;
                cout << "|2. Bañarse y pescar luego."<<endl;
                cout << "|3. caminar por la orilla del rio un rato."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
                cout << "|que rio tengo hambre y estoy sucio:"<<endl;
                cout << "|1. (juan esta en el rio)que rio tan  bonito pescare y me bañare."<<endl;
                cout << "|2. Revisar si hay algo de comer serca del rio o un pescado."<<endl;
                cout << "|3. nadar un rato y pescar."<<endl;
                cout << "|selecciona una opcion(1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin >>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                break;
            case 4:
            	cout<<""<<endl;
            	
            
            
                
                ;
                
                break;
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 4:// principal caso
                cout << "|-----------------------------------------------dinero:?   Arma:revolver   HP=100%" << endl;
                cout << "|Juan reviso su casa, parece que tengo un  libro y mi viejo revolver(juan coje el revolver)" << endl;
                cout << "|no me gusta mucho leer, revisa el revolver solo tiene 2 balas " << endl;
                cout << "|1.-salir a ver el campo y comprar balas." << endl;
                cout << "|2.-buscar balas para el revolver."<<endl;
                cout << "|3.-buscar a ver  que hay para deayunar en la casa."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
        cout << "|(juan desayuno y salio de su casa"<<endl;
        cout << "|Juan salio de su casa y comprara balas para el revolver"<<endl;
        cout << "|donde estara mi vaca y mi campo se acavo, bueno acompar las balas?:"<<endl;
        cout << "|1.ir caminando al pueblo."<<endl;
        cout << "|2.buscar a la vaca."<<endl;
        cout << "|3.ver tu campo de maiz, aver como esta despues de la lluvia."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {//caso4.1
            case 1:
            	cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|(juan salio al pueblo)ire ala armeria a comprar balas para mi revolver"<<endl;
                cout << "|ho! una cantina tiene tiempo que no tomo:"<<endl;
                cout << "|1. Ir ala armeria."<<endl;
                cout << "|2. Ve ala cantina a tomar."<<endl;
                cout << "|3. Recorrer el pueblo."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;;
        cout << "|me gusta tomar pero creo que no traigo dinero podria ir ala armeria y pedir prestado"<<endl;
        cout << "|o puedo ir ala cantina y pedir tambien credito:"<<endl;
        cout << "|1.Ir ala cantina y pedir credito."<<endl;
        cout << "|2.ir a la armeria y pedir prstado."<<endl;
        cout << "|3.Caminar por el pueblo un rato."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout<< "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout <<"|pensando mejor voy a tomar y vere si hay un amigo o pido prestado."<<endl;
                cout <<"|ya llegue a la cantina,(entra juan)hola a todos:"<<endl;
                cout <<"|1. pedir una cerveza con el cantinero."<<endl;
                cout <<"|2. Sentarse en una mesa y esperar alguien que te atienda."<<endl;
                cout <<"|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout <<"|Seleccione una opción (1-3)"<<endl;
                cout <<"|5. Salir del juego" << endl;
                cout <<"|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
        cout << "|(juan cree que es mejor hablar con el cantinero sobre que no trae dinero)"<<endl;
        cout << "|hola cantinero me harias el favor de fiarme una cervezano traje dinero pero sabes que pago."<<endl;
        cout << "|cantinero-Esta bien pero solo por que nos conocemos,si no no lo aria."<<endl;
        cout << "|(el cantinero le cirvio una cerveza a juan)"<<endl;
        cout << "|1.tomar tu cerveza tranquilamente"<<endl;
        cout << "|2.Hablar con el cantinero sobre tu dia"<<endl;
        cout << "|3.Tomar la cerveza e irse ala armeria"<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomo su cerveza)estubi buena la cerveza,ha cantinero antes de irme quisieras"<<endl;
                cout << "|escuchar alguna historiaa, no se como me fue hoy."<<endl;
                cout << "|Cantinero-Esta bien como te fue en el viaje hasta aca."<<endl;
                cout << "|1.contar desde que te despertastes"<<endl;
                cout << "|2.Contar desde que llegastes al pueblo"<<endl;
                cout << "|3.Contar lo de la lluvia de ayer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:0 Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomaba su cerveza)que dia cantinero,antes de irme queria decirte que tuve"<<endl;
                cout << "|mala suerte con la lluvia de ayer y perdi todo mi plantacion y mi vaca,"<<endl;
                cout << "|o era primero que llege al pueblo y no traia dinero bueno es lo mismo:"<<endl;
                cout << "|1.Quieres hablar con el cantinero un poco mas?"<<endl;
                cout << "|2.Salir para ir ala armeria"<<endl;
                cout << "|3.Despedirse y salir de la cantina"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan bebe su cerveza)que buena cerveza,antes de salir queria desirte que"<<endl;
                cout << "|que cuando llegue al pueblo medi cuenta que no traia dinero, o hera primero sobre"<<endl;
                cout << "|la lluvia de anoche que perdi mi maiz:"<<endl;
                cout << "|1.Contar tu historia un poco mas"<<endl;
                cout << "|2.Salir a la armeria"<<endl;
                cout << "|3.Despedirse antes del anochecer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|queria ir ala armeria pero mejor tomo algo tengo sed voy a el bar,"<<endl;
                cout << "|estoy en la cantina espero no tener problemas por el dinero hay veremos que pasa."<<endl;
                cout << "|1. pedir una cerveza con el cantinero."<<endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|camine un  rato pero quiero tamar algo asi que voy a el bar,ya estoy aqui"<<endl;
                cout << "|tendre que hablar con el cantinero:"<<endl;
                cout << "|1.hablar con el cantinero y pedir una cerveza."<<endl;
                cout << "|2.sentarse y ablar con el mesero."<<endl;
                cout << "|3.pedir una cerveza y luego ver lo del pago."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2://4.1
            	cout << "|-----------------------------------------------dinero:?   Arma:ninguna    HP=100%" << endl;
            	cout << "|entrare al boque espero encontrala, una cueva ire aya,"<<endl;
                cout << "|Entras en la cueva y te encuentras con dos pasillos. ¿Hacia dónde vas?" << endl;
                cout << "|1. Hacia la izquierda" << endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. Salir de la cueva" << endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;;
        cout << "|me gusta tomar pero creo que no traigo dinero podria ir ala armeria y pedir prestado"<<endl;
        cout << "|o puedo ir ala cantina y pedir tambien credito:"<<endl;
        cout << "|1.Ir ala cantina y pedir credito."<<endl;
        cout << "|2.ir a la armeria y pedir prstado."<<endl;
        cout << "|3.Caminar por el pueblo un rato."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout<< "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout<< "|pensando mejor voy a tomar y vere si hay un amigo o pido prestado."<<endl;
                cout <<"|ya llegue a la cantina,(entra juan)hola a todos:"<<endl;
                cout <<"|1. pedir una cerveza con el cantinero."<<endl;
                cout <<"|2. Sentarse en una mesa y esperar alguien que te atienda."<<endl;
                cout <<"|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout <<"|Seleccione una opción (1-3)"<<endl;
                cout <<"|5. Salir del juego" << endl;
                cout <<"|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
        cout << "|(juan cree que es mejor hablar con el cantinero sobre que no trae dinero)"<<endl;
        cout << "|hola cantinero me harias el favor de fiarme una cervezano traje dinero pero sabes que pago."<<endl;
        cout << "|cantinero-Esta bien pero solo por que nos conocemos,si no no lo aria."<<endl;
        cout << "|(el cantinero le cirvio una cerveza a juan)"<<endl;
        cout << "|1.tomar tu cerveza tranquilamente"<<endl;
        cout << "|2.Hablar con el cantinero sobre tu dia"<<endl;
        cout << "|3.Tomar la cerveza e irse ala armeria"<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomo su cerveza)estubi buena la cerveza,ha cantinero antes de irme quisieras"<<endl;
                cout << "|escuchar alguna historiaa, no se como me fue hoy."<<endl;
                cout << "|Cantinero-Esta bien como te fue en el viaje hasta aca."<<endl;
                cout << "|1.contar desde que te despertastes"<<endl;
                cout << "|2.Contar desde que llegastes al pueblo"<<endl;
                cout << "|3.Contar lo de la lluvia de ayer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:0 Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomaba su cerveza)que dia cantinero,antes de irme queria decirte que tuve"<<endl;
                cout << "|mala suerte con la lluvia de ayer y perdi todo mi plantacion y mi vaca,"<<endl;
                cout << "|o era primero que llege al pueblo y no traia dinero bueno es lo mismo:"<<endl;
                cout << "|1.Quieres hablar con el cantinero un poco mas?"<<endl;
                cout << "|2.Salir para ir ala armeria"<<endl;
                cout << "|3.Despedirse y salir de la cantina"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan bebe su cerveza)que buena cerveza,antes de salir queria desirte que"<<endl;
                cout << "|que cuando llegue al pueblo medi cuenta que no traia dinero, o hera primero sobre"<<endl;
                cout << "|la lluvia de anoche que perdi mi maiz:"<<endl;
                cout << "|1.Contar tu historia un poco mas"<<endl;
                cout << "|2.Salir a la armeria"<<endl;
                cout << "|3.Despedirse antes del anochecer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout<< "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout <<"|queria ir ala armeria pero mejor tomo algo tengo sed voy a el bar,"<<endl;
                cout <<"|estoy en la cantina espero no tener problemas por el dinero hay veremos que pasa."<<endl;
                cout <<"|1. pedir una cerveza con el cantinero."<<endl;
                cout <<"|2. Hacia la derecha" << endl;
                cout <<"|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout <<"|Seleccione una opción (1-3)"<<endl;
                cout <<"|5. Salir del juego" << endl;
                cout <<"|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|camine un  rato pero quiero tamar algo asi que voy a el bar,ya estoy aqui"<<endl;
                cout << "|tendre que hablar con el cantinero:"<<endl;
                cout << "|1.hablar con el cantinero y pedir una cerveza."<<endl;
                cout << "|2.sentarse y ablar con el mesero."<<endl;
                cout << "|3.pedir una cerveza y luego ver lo del pago."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                break;
            case 3://4.1
            	cout << "|-----------------------------------------------dinero:?   Arma:revolver  HP:100%"<<endl;
            	cout << "|mi campo lo perdi todo no tendre dinero,escuchom un ruido que es un monstruo¡"<<endl;
                cout << "|Te enfrentas a un monstruo. ¿Cómo decides atacar?" << endl;
                cout << "|1. buscar algo en tu casa para defenderte"<<endl;
                cout << "|2. Lanzr piedras o rama a la bestia."<<endl;
                cout << "|3. Intentar huir" << endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principal
        cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;;
        cout << "|me gusta tomar pero creo que no traigo dinero podria ir ala armeria y pedir prestado"<<endl;
        cout << "|o puedo ir ala cantina y pedir tambien credito:"<<endl;
        cout << "|1.Ir ala cantina y pedir credito."<<endl;
        cout << "|2.ir a la armeria y pedir prstado."<<endl;
        cout << "|3.Caminar por el pueblo un rato."<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuariocopiar
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|pensando mejor voy a tomar y vere si hay un amigo o pido prestado."<<endl;
                cout << "|ya llegue a la cantina,(entra juan)hola a todos:"<<endl;
                cout << "|1. pedir una cerveza con el cantinero."<<endl;
                cout << "|2. Sentarse en una mesa y esperar alguien que te atienda."<<endl;
                cout << "|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout  <<"|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                 do {
        // Menú principalcopiar
        cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
        cout << "|(juan cree que es mejor hablar con el cantinero sobre que no trae dinero)"<<endl;
        cout << "|hola cantinero me harias el favor de fiarme una cervezano traje dinero pero sabes que pago."<<endl;
        cout << "|cantinero-Esta bien pero solo por que nos conocemos,si no no lo aria."<<endl;
        cout << "|(el cantinero le cirvio una cerveza a juan)"<<endl;
        cout << "|1.tomar tu cerveza tranquilamente"<<endl;
        cout << "|2.Hablar con el cantinero sobre tu dia"<<endl;
        cout << "|3.Tomar la cerveza e irse ala armeria"<<endl;
        cout << "|Seleccione una opción (1-3)"<<endl;
        cout << "|5. Salir del juego" << endl;
        cout << "|------------------------------------------------------------------------------------"<<endl;

        // Captura de la elección del usuario
        
        cin >> opcion;
        system("cls");

        // Acciones según la elección del usuario
        switch (opcion) {
            case 1:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomo su cerveza)estubi buena la cerveza,ha cantinero antes de irme quisieras"<<endl;
                cout << "|escuchar alguna historiaa, no se como me fue hoy."<<endl;
                cout << "|Cantinero-Esta bien como te fue en el viaje hasta aca."<<endl;
                cout << "|1.contar desde que te despertastes"<<endl;
                cout << "|2.Contar desde que llegastes al pueblo"<<endl;
                cout << "|3.Contar lo de la lluvia de ayer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:0 Arma:revolver HP:100%"<<endl;
                cout << "|(juan tomaba su cerveza)que dia cantinero,antes de irme queria decirte que tuve"<<endl;
                cout << "|mala suerte con la lluvia de ayer y perdi todo mi plantacion y mi vaca,"<<endl;
                cout << "|o era primero que llege al pueblo y no traia dinero bueno es lo mismo:"<<endl;
                cout << "|1.Quieres hablar con el cantinero un poco mas?"<<endl;
                cout << "|2.Salir para ir ala armeria"<<endl;
                cout << "|3.Despedirse y salir de la cantina"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:0  Arma:revolver HP:100%"<<endl;
                cout << "|(juan bebe su cerveza)que buena cerveza,antes de salir queria desirte que"<<endl;
                cout << "|que cuando llegue al pueblo medi cuenta que no traia dinero, o hera primero sobre"<<endl;
                cout << "|la lluvia de anoche que perdi mi maiz:"<<endl;
                cout << "|1.Contar tu historia un poco mas"<<endl;
                cout << "|2.Salir a la armeria"<<endl;
                cout << "|3.Despedirse antes del anochecer"<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 2:
                cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|queria ir ala armeria pero mejor tomo algo tengo sed voy a el bar,"<<endl;
                cout << "|estoy en la cantina espero no tener problemas por el dinero hay veremos que pasa."<<endl;
                cout << "|1. pedir una cerveza con el cantinero."<<endl;
                cout << "|2. Hacia la derecha" << endl;
                cout << "|3. pedir una cerveza y sentarse a esperarla."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cin>>opcion;
                system("cls");
                break;
            case 3:
                cout << "|-----------------------------------------------dinero:?   Arma:revolver HP:100%"<<endl;
                cout << "|camine un  rato pero quiero tamar algo asi que voy a el bar,ya estoy aqui"<<endl;
                cout << "|tendre que hablar con el cantinero:"<<endl;
                cout << "|1.hablar con el cantinero y pedir una cerveza."<<endl;
                cout << "|2.sentarse y ablar con el mesero."<<endl;
                cout << "|3.pedir una cerveza y luego ver lo del pago."<<endl;
                cout << "|Seleccione una opción (1-3)"<<endl;
                cout << "|5. Salir del juego" << endl;
                cout << "|------------------------------------------------------------------------------------"<<endl;
                cin>>opcion;
                system("cls");
                break;
           
             
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
                break;
            
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);
                break;
            case 5:
                cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige nuevamente." << endl;
        }

    } while (opcion != 5);

    return 0;
}
