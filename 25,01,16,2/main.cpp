#include <iostream>

using namespace std;
int numero;
int main()
{
    cout << "Ingresar un numero";
    cin>> numero;
    if((numero>=1)and(numero<=50))
    {
        cout<<"Numero esta cerca entre 1-50";
    }
    else if((numero>=51)and(numero<=100))
        cout<<"Numero esta entre 51-100";

    else if(numero>100)
    {
        cout<<"Numero mayor a 100";
    }
    else
    {
        cout<<"Numero negativo";
    }


    return 0;
}
