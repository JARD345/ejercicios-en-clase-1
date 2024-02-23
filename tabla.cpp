#include <iostream>
using namespace std;
int main() {
    int contador=0,numero,resultado;
    char continuar ='S';
    while (continuar =='S'){
        cout << "ingrese un numero para obtener su tabla" << endl;
        cin >> numero;
        while (contador<=10) {
            resultado = numero * contador;
            cout << "El resultado de " << numero << " * " << contador << " es " << resultado << endl;
            contador=contador+1;
        }
        cout << "Desea continuar S/N" << endl;
        cin >> continuar;
        contador=0;
        while (continuar!='S'&continuar!='N'){
            cout<<"Ingrese una opcion valida"<<endl;
            cout << "Desea continuar S/N" << endl;
            cin>>continuar;

        }
    }
    return 0;
}
