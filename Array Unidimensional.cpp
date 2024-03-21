#include<iostream>
using namespace std;
main(){
	int tam=0;
	int suma=0;
	cout<<"Cuantas notas desea ingresar: "; cin>>tam;
	
	int notas[tam];
	
	for (int i=0;i<tam;i++){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
	}
	for (int i=0;i<tam;i++){
		suma += notas[i];
	}
	
	cout<<"suma total notas: "<<suma<<endl;
	float promedio=suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;

	
	system("pause");
}