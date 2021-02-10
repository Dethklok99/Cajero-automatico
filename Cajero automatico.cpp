//Cajero automatico//

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

void Saldo();
void Retiro();
void Cargar();
void Recibo();
void Salir();

float saldo_inicial = 10000, retiro, saldo, cargar;

int main(){
	int user[3] = {3000,3001,3002},PIN[3] = {1357,2468,9182},opc,a,salir;
	float s,pines,usuario;
	int impri,i;
	
	cout<<"\t*** Bienvenido al Cajero Automatico ***\n"<<endl;
	
	cout<<"Ingresa tu usuario: "<<endl;
	cin>>usuario;
	for(i = 0; i < 3; i++){
		if(usuario == user[i]){
			a = i;
		}	
		
	}
	
	cout<<"Ingresa tu PIN:"<<endl;
	cin>>pines;
	if((usuario == user[0] && pines == PIN[0]) ||
	(usuario == user[1] && pines == PIN[1]) ||
	(usuario == user[2] && pines == PIN[2])){
	
		
		do{
			system ("cls");
			cout<<"\t*** Bienvenido a las opciones del cajero ***"<<endl;
			cout<<"Elija una opcion:"<<endl;
			cout<<"1.- Consultar saldo"<<endl;
			cout<<"2.- Retirar efectivo"<<endl;
			cout<<"3.- Cargar saldo"<<endl;
			cout<<"4.- Imprimir saldo"<<endl;
			cout<<"5.- Salir\n"<<endl;
			cin>>opc;
	
		switch(opc){
			case 1:
				Saldo();
	  			getch ();
				break;
				
			case 2:
				Retiro();
	  			getch ();
				break;
							
			case 3: 
				Cargar();
	 			getch ();
				break;		
			case 4:
				Recibo();
	  			getch ();
				break;
				
			case 5:
				Salir();
				getch();
				break;
			
			default: 
				cout<<"\n\tOpcion no valida. Digite una opcion correcta.";
				getch ();
				break;
				}
			getch();
			}while(opc != 5);
			
		}else{
				cout << "Error de usuario y/o PIN"<<endl;
			}	
	
	system("pause");
	getch();
	return 0;	
}

void Saldo(){
	system("cls");
	cout<<"\n\t**Menu de saldo**"<<endl;
	cout<<"\n\tSu saldo actual es de " << saldo_inicial <<" pesos."<< endl;
}

void Retiro(){
		system("cls");
		cout<<"\n\t**Menu de retiro de efectivo**"<<endl;
	  cout<< "\n\tIngrese la cantidad que desea retirar: "; cin>>retiro;
	  	saldo = saldo_inicial - retiro;
	  	if (saldo>0){
	  		cout<<"\n\tSu saldo restante es de "<<saldo<<" pesos."<< endl;
	 	 }
	 	 else{
	  		cout<<"\n\tNo cuenta con la cantidad sufiente para retirar."<< endl;
		  }
}

void Cargar(){
		system("cls");
		cout<<"\n\t**Menu de cargar saldo**"<<endl;
	  cout<<"\n\tIngrese la cantidad que desea cargar: "; cin>>cargar;
		saldo = saldo_inicial + cargar;
	  	cout<<"\n\tSu saldo actual es de "<<saldo<< " pesos."<< endl;
}

void Recibo(){
	system("cls");
	ofstream ticket;
	
	ticket.open("recibo.txt", ios::out);
	
	if(ticket.fail()){
		cout<<"ERRROR no se puede imprimir el recibo";
		exit(1);
	}
	
	cout<<"\tRecibo creado"<<endl;
	ticket<<"\tRecibo del cajero."<<endl;
	ticket<<"\t\nSu saldo actual es de "<<cargar + saldo_inicial<<" pesos."<<endl;
	ticket<<"\t\nGracias por su preferencia."<<endl;
	
	ticket.close();
}

void Salir(){
	system("cls"); 
		cout<< "\n\t\tFue un placer poder atenderle."<<endl;	
}
