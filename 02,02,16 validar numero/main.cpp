#include <iostream>

using namespace std;
//validar que el numero esté entre 50 y 100
int main()
{
   int numero,i;
   for(i=0;i<5;i++)
   {



   do{
    cout<<"Ingresar el numero entre 50-100...";
    cin>>numero;

   }while(!(numero>=50)and(numero<=100));
   cout<<i<<"numero correcto "<<numero<<"\n";

}
    return 0;
}
