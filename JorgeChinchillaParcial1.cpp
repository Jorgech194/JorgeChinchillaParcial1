#include <iostream>

using namespace std;

string nombre;
int ventas, zona;
double comision = 0;
double bono = 0;

void ingresos(int &ventas, int& zona, string &nombre){
    cout<<"ingresar nombre: ";
    cin>>nombre;
    cout<<"ingresar ventas: ";
    cin>>ventas;
    do{
    cout<<"ingresar zona: ";
    cin>>zona;
    }while(zona>3);
}
void Calcularcomision(int ventas, int zona){
    if(ventas>=1 && ventas<=20000){
        comision = ventas*0.4;
        cout << "comision: " << comision;
    }
    if(ventas>=20001 && ventas<=50000){
        comision = ventas*0.5;
        if((zona== 1 || zona == 3) && ventas>=30000 ){
            bono = 500;
            cout << "bono: "<< bono;
            cout << "comision: " << comision;
        }
        if(zona== 2 && ventas>= 40000 ){
            bono = 600;
            cout << "bono: "<< bono;
            cout << "comision: " << comision;
        }
    }
    if(ventas>=50001){
        comision = ventas*0.6;
        if(zona== 1 || zona == 3){
            bono = 500;
            cout << "bono: "<< bono;
            cout << "comision: " << comision;
        }
        if(zona== 2 && ventas>= 40000 ){
            bono = 600;
            cout << "bono: "<< bono;
            cout << "comision: " << comision;
        }
    }

}

int main()
{
    ingresos(ventas,zona,nombre);
    Calcularcomision(ventas,zona);
    return 0;
}
