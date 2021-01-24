//Cajero automatico//

#include<iostream>

using namespace std;

int main(){
	int usuario1,ramon,PIN,opc;
	int saldo_inicial = 10000;
	float saldo = 0,retiro,extra,impri;
	
	cout<<"\tBienvenido al Cajero Automatico\n"<<endl;
	
	cout<<"Ingresa tu usuario: "<<endl;
	cin>>usuario1;
	usuario1 = ramon;
	
	if(usuario1 == ramon){
		cout<<"El usuario es correcto"<<endl;
	}
	else{
		cout;"Usuario no valido";
	}
	
	cout<<"Ingresa tu PIN:"<<endl;
	cin>>PIN;
	PIN = 12345;
	
	
	cout<<"\tBienvenido a las opciones del cajero"<<endl;
	cout<<"Elija una opcion:"<<endl;
	cout<<"1.- Consultar saldo"<<endl;
	cout<<"2.- Retirar efectivo"<<endl;
	cout<<"3.- Cargar saldo"<<endl;
	cout<<"4.- Imprimir saldo"<<endl;
	cout<<"5.- Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Su saldo es de: "<<endl;
			cin>>saldo;
			saldo = saldo_inicial;
			cout<<"Usted cuenta con la cantidad de: "<<saldo;break;
			
		case 2:
			cout<<"Digite la cantidad de dinero que desea retirar: "<<retiro;
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"No cuenta con saldo suficiente para realizar la transaccion";
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Su nuevo saldo es de: "<<saldo;
			}
			
		case 3: 
			cout<<"Digite la cantidad de dinero que desea ingresar: "<<extra;
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Su nuevo saldo es de: "<<saldo;break;
			
		case 4:
			cout<<"Imprimiendo saldo: "<<impri;
			cin>>impri;
			impri = saldo_inicial;
			cout<<"Su saldo impreso es de: "<<saldo;break;
			
		case 5: break;
	}	

	return 0;

