#include <iostream>
using namespace std;
int main() {
    int n, i;
    char continuar='S';
    while(continuar=='S') {
        cout << "Ingresa un numero para saber si es primo o no: ";
        cin >> n;

        if (n == 1) {
            cout << "No es primo" << endl;
        } else {
            i = 2;
            while (n % i != 0) {
                i++;
            }
            if (i == n)
                cout << "El numero es primo" << endl;
            else
                cout << "El numero es compuesto" << endl;
        }
        cout<<"Desea continuar S/N"<<endl;
        cin>>continuar;
        if(continuar!='S'&continuar!='N'){
            cout<<"Ingrese una respuesta valida"<<endl;
            cin>>continuar;
        }
    }
    return 0;
}
