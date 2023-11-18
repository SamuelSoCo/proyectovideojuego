#include<iostream>
#include<stdlib.h>
using namespace std;
int a,b;
int main()
{
	do{
		cout<<"---------------------------------------------------------------"<<endl;
	cout<<"                                                       HP:100%"<<endl;
	cout<<"-juan es ungranjero algo alto y furte pero con mala suerte"<<endl;
	cout<<"-parece que va adespertar.Ahhhhh(juan desperto),ve asu alrededor"<<endl;
	cout<<"-juan:que tarde me desperte que hare hoy. "<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"que quieres que haja juan pulsa los numeros que tiene cada orden.\n";
	cout<<"1-Dormir un poco mas."<<endl;
	cout<<"2-Levantarte cambiarse de ropa y salir."<<endl;
	cout<<"3-Levantarse de la cama eir a desayunar."<<endl;
	cout<<"4-Ver que hay en tu chosa y que puedes hacer dentro de ella;"<<endl;
	cout<<"5-Salir del juego."<<endl;

	 cin>>a;
	 switch(a){
	 	case 1:"Ya apasado varias horas ya es como la una dela tarde,ya no desayune bueno que hare entonces .\n";
	 	"1-Te quieres levantar a buscar para  comer\n";
	 	"2-Cambierte de ropa y salir de tu caso a ver tu campo como quedo de la lluvia de ayer\n";
	 	"3-Ver que puedes hacer en tu casa para pasar el rato\n";
	 	"4-Quieres salir."
	 	break;
	 	
	 	case 2 :"hooo no la ropa limpia se quedo colgada afuera y como llovio no puedo cambiarme.\n";
	 	break;
	 	case 3 : "                                                                      hp:100%";
		 "vere que tengo para desayunar parece que solo tengo pan tendre de salir a ordeñar una vaca si quiero leche para mi pan.\n";
		 case 4 :"tengo en mi casa un libro(la biblia), un encendedor un cuchillo y una pistola\n";
		 break;
		case 5 :"seguro que quieres salir\n";
		 cout<<"\n 1-si.";
		 cout<<"\n 2-no.";
		 cin>> b;
		 if(b==1){
		 	return 0;
		 }
		 else
		 {return main();
		 }
		 break;
	 }
	}
	while(b!=5);
	system("pause");

	}
	
	


return 0;}
}



	
	


	


	



