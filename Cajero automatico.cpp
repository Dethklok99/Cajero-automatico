//Cajero automatico//

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int usuario,user[3] = {300,301,302},PIN[3] = {1357,2468,9182},opc;
	int saldo_inicial = 10000,i,s,pines,a;
	float saldo = 0,extra,impri;
	char retiro;
	
	cout<<"\tBienvenido al Cajero Automatico\n"<<endl;
	
	cout<<"Ingresa tu usuario: "<<endl;
	cin>>usuario;
	for(i = 0; i < 3; i++){
		if(usuario != user[i]){
			continue;
		}	
		else{
			a = i;
			break;
		}	
	}
	
	cout<<"Ingresa tu PIN:"<<endl;
	cin>>pines;
	for(i = 0; i < 3; i++){
		if(pines != PIN[i]){
			continue;
		}
		else{
			s = i;
			break;
		}
	}
	
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
			cout<<"Su saldo es de: "<<saldo_inicial<<endl;
			cin>>saldo_inicial;
		case 2:
			cout<<"Digite la cantidad de dinero que desea retirar: "<<retiro<<endl;break;
			cin>>retiro;
			
			
			if(retiro > saldo_inicial){
				cout<<"No cuenta con saldo suficiente para realizar la transaccion"<<endl;
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Su nuevo saldo es de: "<<saldo<<endl;break;
			}
			
		case 3: 
			cout<<"Digite la cantidad de dinero que desea ingresar: "<<extra<<endl;
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
	
	system("pause");
	getch();
	return 0;
}
