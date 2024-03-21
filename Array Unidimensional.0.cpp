#include<iostream>
using namespace std;
main(){
      char nombre[30];
      cout<<"Ingrese nombre completo: "<<endl;
      cin.get(nombre,30);
      cout<<nombre<<endl;
      
      string semana[7] ={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
      for (int i=0;i<7;i++){
      	cout<<semana[i]<<endl;
	  }
      
      system("pause");

}