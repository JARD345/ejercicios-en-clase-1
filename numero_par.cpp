#include <iostream>
using namespace std;
int main() {
    int numero,resultado;
    char continuar='S';
    while (continuar =='S'){
        cout<<"ingrese un numero para saber si es par o no"<<endl;
        cin>>numero;
        resultado=numero%2;
        if (resultado==0){
            cout<<"El numero es par"<<endl;
        }
        else{
            cout<<"El numero es impar"<<endl;
        }
        cout<<"Desea continuar S/N"<<endl;
        cin >> continuar;
    }
    return 0;
}
