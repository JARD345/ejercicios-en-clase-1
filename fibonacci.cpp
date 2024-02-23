#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a=0;
    int b=1;
    int maximo;
    int d;

cout<<"ingrese el maximo de numeros que desea en la serie de fibonacci"<<endl;
cin>>maximo;
cout<<a<<endl<<b<<endl;
    while (maximo>0){
        d=a+b;
        maximo=maximo-1;
        a=b;
        b=d;
        cout<<d<<endl;
    }

    return 0;
}
