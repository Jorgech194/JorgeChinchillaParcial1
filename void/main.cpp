#include <iostream>
#include<cstdlib>

using namespace std;
int a,b,resp;
void sumar();
void restar();


int main(int argc,char * argv[])

{
    int opcion;
    cout<<"Bienvenido al menu de opciones";
    cout<<"1-Sumar";
    cout<<"2-Restar";
    cout<<"3-Salir";
    cin>>opcion;
    switch(opcion)
    {
    case 1:
        sumar();
        break;

    case 2:
        restar();
        break;
    case 3:
        cout<<"Que tenga un buen día";
        break;
    default:
        cout<<"Opcion no valida";

    }

    return 0;
}

void sumar()
{
    cout<<"Inserte un numero";
    cin>>a;
    cout<<"Inserte otro numero";
    cin>>b;
    resp= a+b;
    cout<<"\n";
    cout<<resp;
}
