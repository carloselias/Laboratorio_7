//Directivas de pre-procesador
#include <iostream> //header
#include <string>
using namespace std; //el espacio de nombres standard
class persona
{
	protected:
		string nombre,ocupacion;
		int edad;
	public:
		persona():nombre(""),ocupacion(""),edad(0) {}
		persona(string n1,string o1,int e1):nombre(n1),ocupacion(o1),edad(e1) {}
		void setNombre(string n1) 
		{
        	nombre=n1;
    	}
    	void setOcupacion(string o1) 
		{
        	ocupacion=o1;
    	}
		void setEdad(int e1) 
		{
        	edad=e1;
    	}
    	void mi1()
		{
        	cout<<"informacion persona"<<endl<<"> nombre: "<<nombre<<", edad: "<<edad<<", ocupacion: "<<ocupacion<<endl;
    	}	

};
class estudiante:public persona
{
	private:
		string noestudiante;
		int promcalificaciones;
	public:
		estudiante():persona(),noestudiante(""),promcalificaciones(0) {}
		estudiante(string n1,string o1,int e1,string ne1,int pc1):persona(n1,o1,e1),noestudiante(ne1),promcalificaciones(pc1) {}
		void setNoestudiante(string ne1) 
		{
        	noestudiante=ne1;
    	}
    	void setPromcalificaciones(int pc1) 
		{
        	promcalificaciones=pc1;
    	}
    	void mi2()
		{
			mi1();
        	cout<<"informacion estudiante"<<endl<<"> numero de estudiante: "<<noestudiante<<", promedio de calificaciones: "<<promcalificaciones<<endl;
    	}
};
int main()
{
	string nombre,ocupacion,noestudiante;
	int edad,promcalificaciones;
	cout<<"ingrese el nombre"<<endl<<"> ";
	getline(cin,nombre);
	cout<<"ingrese la edad"<<endl<<"> ";
	cin>>edad;
	cout<<"ingrese la ocupacion"<<endl<<"> ";
	cin.ignore();
	getline(cin,ocupacion);
	cout<<"ingrese el numero de estudiante"<<endl<<"> ";
	getline(cin,noestudiante);
	cout<<"ingrese el promedio de calificaciones"<<endl<<"> ";
	cin>>promcalificaciones;
	estudiante est1(nombre,ocupacion,edad,noestudiante,promcalificaciones);
	est1.mi2();
	return 0;
}