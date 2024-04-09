//Directivas de pre-procesador
#include <iostream> //header
#include <vector>
#include <algorithm>
using namespace std; //el espacio de nombres standard
void algoritmodeburbuja(vector<string>& arr) 
{
    int n=arr.size();
    bool sc;
    for (int i1=0;i1<n-1;i1++) 
	{
        sc=false;
        for (int i2=0;i2<n-i1-1;i2++) 
		{
            if (arr[i2]>arr[i2+1]) 
			{
                swap(arr[i2], arr[i2+1]);
                sc=true;
            }
        }
        if (!sc)
            break;
    }
};
int main() 
{
    vector<string>nombres={"Alicia","Jim","Kirsten","David","Carlos"};
    std::cout << "Nombres en desorden:"<<endl;
    for (string nombre:nombres) 
	{
        cout<<nombre<<endl;
    }
    std::cout << std::endl;
    algoritmodeburbuja(nombres);
    cout<<"Nombres en orden:"<<endl;
    for (string nombre:nombres) 
	{
        cout<<nombre<<endl;
    }
    return 0;
}