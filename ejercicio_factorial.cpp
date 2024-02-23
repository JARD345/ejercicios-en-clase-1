#include <iostream>
using namespace std;
int main() {
    int contador=0;
   cout<<"ingrese un numero para obtener su factorial"<<endl;
   cin>>contador;
    int factorial=contador;
   cout<<"el resultado de ";
   cout<<contador;
   cout<<"i es: ";
while (contador>1){
    contador=contador-1;
    factorial=factorial*contador;
}
cout<<factorial;
    return 0;
}
