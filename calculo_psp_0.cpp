#include <iostream>

using namespace std;

int main(){
	int a, b, r;
	cout<<"Dame el lado A"<<endl;
	cin>>a;
	cout<<"Dame la base B"<<endl;
	cin>>b;
	if(a == 0 || b == 0){
		cout<<"no se pudo, ninguno de los valores debe ser 0";
	}else{
		r=a*b;
		if(a==b){
			cout<<"Es un cuadrado y su area es: "<<r<<endl;
		}else{
			cout<<"Es un rectangunlo y su area es: "<<r<<endl;
		}
	}
		
}
