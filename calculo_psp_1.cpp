#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	cout<<"Ingresa el valor de A"<<endl;
	cin>>a;
	cout<<"Ingresa el valor de B"<<endl;
	cin>>b;
	cout<<"Ingresa el valor de C"<<endl;
	cin>>c;
	if(a == 0 && b == 0 && c==0){
		cout<<"Los valores no indican figura";
	}else{
		if( a==0 || b==0 || c==0 ){
			if(a == b && c == 0 && a != 0 && a > 0){
				cout<<"Es un cuadrado";
			}else if(a != 0 && b == 0 && c == 0 && a > 0){
				cout<<"Es un circulo";
			}else if(a < b && c == 0 && a != 0 && b != 0){
				cout<<"Es un rectangulo";
			}else{
				cout<<"Los valores no indican figura";
			}
		}else{
			if(a == b && a == c){
				cout<<"La figura es un triángulo equilátero";
			}else if(a > b && b > c ){
				cout<<"La figura es un triángulo escaleno";
			}else if((a == c && b < a) || (c > a && a == b) || (a > c && c == b)){
				cout<<"La figura es un triángulo isósceles";
			}else{
				cout<<"Los valores no indican figura";
			}
		}
	}
	
}
