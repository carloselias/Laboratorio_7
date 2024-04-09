//Directivas de pre-procesador
#include <iostream> //header
#include <string>
using namespace std; //el espacio de nombres standard
class persona
{
	private:
		string nombre,ocupacion;
		int edad;
	public:
		persona():nombre(""),ocupacion(""),edad(0) {}
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
    	void modificarNombre(string n1) 
		{
        nombre=n1;
    	}
    	void modificarOcupacion(string o1) 
		{
        ocupacion=o1;
    	}
		void modificarEdad(int e1) 
		{
        edad=e1;
    	}
    	void mi1()
		{
        cout<<"nombre: "<<nombre<<", edad: "<<edad<<", ocupacion: "<<ocupacion<<endl;
    	}	

};
int main()
{
	persona p1;
	string nombre,ocupacion;
	int edad;
	cout<<"ingrese el nombre"<<endl<<"> ";
	getline(cin,nombre);
	cout<<"ingrese la edad"<<endl<<"> ";
	cin>>edad;
	cout<<"ingrese la ocupacion"<<endl<<"> ";
	cin.ignore();
	getline(cin,ocupacion);
	p1.setNombre(nombre);
	p1.setEdad(edad);
	p1.setOcupacion(ocupacion);
	p1.mi1();
	system("pause");
	cout<<"ingrese el nuevo nombre"<<endl<<"> ";
	getline(cin,nombre);
	cout<<"ingrese la nueva edad"<<endl<<"> ";
	cin>>edad;
	cout<<"ingrese la nueva ocupacion"<<endl<<"> ";
	cin.ignore();
	getline(cin,ocupacion);
	p1.modificarNombre(nombre);
	p1.modificarEdad(edad);
	p1.modificarOcupacion(ocupacion);
	p1.mi1();
	return 0;
}