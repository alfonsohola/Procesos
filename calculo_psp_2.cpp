#include <iostream>
#include <cmath> 

using namespace std;

void menu(){
	cout<<"-------MENÚ-------"<<endl;
	cout<<"1. Determine figura."<<endl;
	cout<<"2. Calcule área."<<endl;
	cout<<"3. Salir"<<endl;
}

void psp0(int n, int ladoA, int ladoB, int ladoC){
	double r = 0, se, te, s, ti;
	switch(n){
		case 1:
			r = ladoA * ladoB;
			cout<<"Es un cuadrado y su area es: "<<r<<endl;
			break;
		case 2:
			r = ladoA * ladoB;
			cout<<"Es un rectangunlo y su area es: "<<r<<endl;
			break;
		case 3:
			r = (ladoA * ladoA) * 3.14;
			cout<<"Es un circulo y su area es: "<<r<<endl;
			break;
		case 4:
			r = (sqrt(3) / 4) * ladoA;
			cout<<"Es un triángulo equilátero y su area es: "<<r<<endl;
			break;
		case 5:
			se = (ladoA + ladoB + ladoC) / 2;
			te = se * (se - ladoA) * (se - ladoB) * (se - ladoC);
			r = sqrt(te);
			cout<<"Es un triángulo escaleno y su area es: "<<r<<endl;
			break;
		case 6:
			s = (ladoA + ladoB + ladoC) / 2;
			ti = s * (s - ladoA) * (s - ladoB) * (s - ladoC);
			r = sqrt(ti);
			cout<<"Es un triángulo isósceles y su area es: "<<r<<endl;
			break;
		default:
			cout<<"Primero deberá determinar la figura en la opción 1"<<endl;
			break;
			
	}
}

int psp1(int ladoA, int ladoB, int ladoC){
	int n = 0;
	if(ladoA == 0 && ladoB == 0 && ladoC==0){
		cout<<"Los valores no indican figura";
		n = 0;
	}else{
		if( ladoA == 0 || ladoB == 0 || ladoC == 0 ){
			if(ladoA == ladoB && ladoC == 0 && ladoA != 0 && ladoA > 0){
				cout<<"Es un cuadrado"<<endl;
				n = 1;
			}else if(ladoA != 0 && ladoB == 0 && ladoC == 0 && ladoA > 0){
				cout<<"Es un circulo"<<endl;
				n = 3;
			}else if(ladoA < ladoB && ladoC == 0 && ladoA != 0 && ladoB != 0){
				cout<<"Es un rectangulo"<<endl;
				n = 2;
			}else{
				cout<<"Los valores no indican figura"<<endl;
				n = 0;
			}
		}else{
			if(ladoA == ladoB && ladoA == ladoC){
				cout<<"La figura es un triángulo equilátero"<<endl;
				n = 4;
			}else if(ladoA > ladoB && ladoB > ladoC ){
				cout<<"La figura es un triángulo escaleno"<<endl;
				n = 5;
			}else if((ladoA == ladoC && ladoB < ladoA) || (ladoC > ladoA && ladoA == ladoB) || (ladoA > ladoC && ladoC == ladoB)){
				cout<<"La figura es un triángulo isósceles"<<endl;
				n = 6;
			}else{
				cout<<"Los valores no indican figura"<<endl;
				n = 0;
			}
		}
	}
	return n;
}
int main(){
	int opc, n;
	int ladoA, ladoB, ladoC;
	bool yi = false;
	do{
		menu();
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingresa el valor de A"<<endl;
				cin>>ladoA;
				cout<<"Ingresa el valor de B"<<endl;
				cin>>ladoB;
				cout<<"Ingresa el valor de C"<<endl;
				cin>>ladoC;
				n = psp1(ladoA, ladoB, ladoC);
				yi = true;
				break;
			case 2:
				if(yi == false){
					cout<<"Primero deberá determinar la figura en la opción 1"<<endl;
				}else{
					psp0(n, ladoA, ladoB, ladoC);
				}
				break;
			case 3:
				cout<<"Hasta la próxima"<<endl;
				break;
			default:
				cout<<"Opcion incorrecta, intente otra vez"<<endl;
				break;
		}
		
	}while(opc != 3);
}
