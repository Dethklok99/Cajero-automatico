//Cajero automatico//

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

void aniadir();

int main(){
	int user[3] = {3000,3001,3002},PIN[3] = {1357,2468,9182},opc,a,salir;
	int saldo_inicial = 10000,i,s,pines,usuario;
	double saldo = 0;
	int retiro,impri;
	char extra;
	
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
				cout<<"Su saldo es de: "<<saldo_inicial<<endl;
				cin>>saldo_inicial;
				break;
				
			case 2:
				cout<<"Digite la cantidad de dinero que desea retirar: "<<retiro<<endl;
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con saldo suficiente para realizar la transaccion"<<endl;
				
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"Su nuevo saldo es de: "<<saldo<<endl;
					break;			
				}	
							
			case 3: 
				cout<<"Digite la cantidad de dinero que desea ingresar: "<<extra<<endl;
				cin>>extra;
				
				if(saldo = saldo_inicial + extra){
					
				}
				
				else{
				saldo = saldo_inicial + extra;				
				cout<<"Su nuevo saldo es de: "<<endl;
				cin>>extra;
				}
				break;			
			case 4:
				aniadir();
				cout<<"Imprimiendo saldo: "<<saldo_inicial<<endl;
				cin>>saldo_inicial;
				break;
				
			default: cout<<"Presione ENTER para salir"<<endl;	
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

void aniadir(){
	ofstream archivo;
	
	archivo.open("cajero_automatico.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"No se puedo abrir el archivo";
		exit(1);
	}
	
	archivo<<"prueba";
	
	archivo.close();
}
