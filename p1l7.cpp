#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void llacv()
{
	ifstream acv1;
	acv1.open("archivop1l7.txt");
	if (acv1.is_open()) 
	{
		string tl1;
		while (getline(acv1,tl1))
		{
			cout<<"nombre y edad: "<<tl1<<endl;
		}
		acv1.close();
	}
	else
	{
		cerr<<"No se ha podido abrir el archivo";
		acv1.close();
	}
};
int main()
{
	string n1,e1;
	ofstream acv2;
	acv2.open("archivop1l7.txt",ios::app);
	if (acv2.is_open()) 
	{
		cout<<"ingrese el nombre de la persona"<<endl<<"> ";
		cin>>n1;
		cout<<"ingrese la edad de la persona"<<endl<<"> ";
		cin>>e1;
		acv2<<n1<<", "<<e1<<endl;
		acv2.close();
	}
	else
	{
		cerr<<"No se ha podido abrir el archivo";
		acv2.close();
	}
	llacv();
}