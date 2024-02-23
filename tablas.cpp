#include <iostream>
using namespace std;
int main() {
    int a=4;
    int b=6;
    int contador = 0;
    int contador2 = 0;
    cout <<"Tabla del 4"<<endl;
    while (contador<=10) {
        cout << "el resultado de 4 * ";
        cout<< contador ;
        cout<<" es: " << a * contador <<endl;

        contador = contador + 1;
    }
    cout<<"Tabla del 6"<< endl;
    while (contador2<=10) {

        cout << "el resultado de 6 * ";
        cout<< contador2 ;
        cout<<" es: " << b * contador2 <<endl;
        contador2 = contador2+1;
    }

return 0;

}



