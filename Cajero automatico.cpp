/*Cajero automatico
Programa desarrollado por Adrian Alains de la Cruz Ventura 1° A Modo Sabatino*/


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
//Definimos las variables
float saldo_inicial = 10000, retiro, saldo, cargar;
	
	
int main(){
	int user[3] = {3000,3001,3002},PIN[3] = {1357,2468,9182},i,opc,a,salir;
	float s,pines,usuario;

//Pantalla de bienvenida                                                                                        
	cout<<"\t---------------------------------------\n\t-   Bienvenido al Cajero Automatico   -              Xalapa, Veracruz. #QuedateEnCasa\n\t---------------------------------------\n"<<endl; 
//Usuarios y pines	
	cout<<"\t\tIngresa tu usuario: ";cin>>usuario;
	for(i = 0; i < 3; i++){
		if(usuario == user[i]){
			a = i;
		}	
	}
	
	cout<<"\n\t\tIngresa tu PIN    : ";cin>>pines;
		if((pines == PIN[i]));
	
	   else{
		cout << "Error de usuario y/o PIN"<<endl;
		}
	
//Opociones del cajero automatico		
		do{
			system ("cls");
			cout<<"\t-------------------------------------------------------\n\t-   Bienvenido a las opciones del cajero automatico   -             No acepte ayuda de desconocidos\n\t-------------------------------------------------------\n"<<endl;
			cout<<"\t\tElija una opcion:\n"<<endl;
			cout<<"\t\t1.- Consultar saldo"<<endl;
			cout<<"\t\t2.- Retirar efectivo"<<endl;
			cout<<"\t\t3.- Cargar saldo"<<endl;
			cout<<"\t\t4.- Imprimir saldo"<<endl;
			cout<<"\t\t5.- Salir\n"<<endl;
			cout<<"\t\tDigite la opcion que desea realizar: ";
			cin>>opc;
	
		switch(opc){
			case 1:
				Saldo();
				break;
				
			case 2:
				Retiro();
				break;
							
			case 3: 
				Cargar();
				break;		
			case 4:
				Recibo();
				break;
				
			case 5:
				Salir();
				break;
			
			default: 
				cout<<"\n\tOpcion no valida. Digite una opcion correcta.";
				getch ();
				break;
				}
			getch();
			}while(opc != 5);
				
	system("pause");
	getch();
	return 0;	
}

void Saldo(){
	system("cls");
	cout<<"\n\t-------------------------\n\t-   Consulta de saldo   -\n\t-------------------------"<<endl;
	cout<<"\n\tSu saldo actual es de: $"<<saldo_inicial<<" pesos. \n"<<endl;
	cout<<"\tPresione [ENTER] para regresar al menu principal. ";
}

void Retiro(){
		system("cls");
		cout<<"\n\t--------------------------\n\t-   Retiro de efectivo   -\n\t--------------------------"<<endl;
	  cout<< "\n\tIngrese la cantidad que desea retirar: ";cin>>retiro;
	  	saldo = saldo_inicial - retiro;
	  	if (saldo>0){
	  		cout<<"\n\tSu nuevo saldo es de: $"<<saldo + cargar<<" pesos. \n"<<endl;
	  		cout<<"\tPresione [ENTER] para regresar al menu principal. ";
	 	 }
	 	 else{
	  		cout<<"\n\tNo cuenta con la cantidad suficiente para realizar la transaccion";
		  }
}

void Cargar(){
		system("cls");
		cout<<"\n\t--------------------\n\t-   Cargar saldo   -\n\t--------------------"<<endl;
	  cout<<"\n\tIngrese la cantidad que desea cargar: ";cin>>cargar;
		saldo = saldo + cargar;
	  	cout<<"\n\tSu nuevo saldo es de: $"<<saldo<<" pesos. \n"<<endl;
	  	cout<<"\tPresione [ENTER] para regresar al menu principal. ";
}
//Impresión del archivo .txt
void Recibo(){
	system("cls");
	ofstream recibo;
	
	recibo.open("Recibo.txt", ios::out);
	
	if(recibo.fail()){
		cout<<"NO se puede imprimir el recibo. ";
		exit(1);
	}
	
	cout<<"\n\t-------------------------------\n\t-   Su recibo se ha impreso   -\n\t-------------------------------\n"<<endl;
	recibo<<"\n\tRecibo generado. \n"<<endl;
	recibo<<"\tSu saldo actual es de: $"<<saldo<<" pesos. ";
	cout<<"\tPresione [ENTER] para regresar al menu principal. ";
	
	recibo.close();
}

void Salir(){
	system("cls"); 
		cout<<"\t--------------------------------------\n\t-   Fue un placer poder atenderle.   -\n\t--------------------------------------\n"<<endl;
		cout<<"\tPresione [ENTER] para salir. "<<endl;
		exit(1);	
}
