#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num,mayor=0,suma=0, conta=0, contarPar=0;
    double promedio;
    char resp;
    do
    {    do
        {cout<<"Ingresar un numero entre 50 y 100...";
        cin>>num;
        }while (!((num>=50)and (num<=100)));
        _flushall();
        do
        {
            cout<<"Desea continuar ...:";
            cin.get(resp);
            _flushall();
    }while ((toupper(resp)!='S')and (toupper(resp)!='N'));
    suma = suma+num;
    if (num>mayor)
    {
        mayor=num;
    }
    conta++;
    if (num%2==0)
    {
        contarPar++;
    }
} while ((toupper(resp)=='S'));
  promedio= suma/conta;
  cout<<" Promedio "<<promedio<<"\n";
  cout<<" Mayor es "<<mayor<<"\n";
  cout<<"Numeros Pares"<<contarPar<<"\n";
    return 0;
}



//Ingresar un numero entero 50-100, luego preguntar
    //si desea continuar, al final del ciclo deberá prensentar
    //el promedio de los numeros entre 80-100 y cual fue el numero mayor.

