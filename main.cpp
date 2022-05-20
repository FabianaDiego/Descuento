#include <iostream>

using namespace std;
int main(){
    float compra, precio;
    cout<<" Compra mas de 10,000 descuento de 25%:  "<<endl;
    cout<<" Compra menos o igual de 10,000 descuento de 10%:  "<<endl;
    cout<<" Ingrese el monto gastado:  "<<endl;
    cin>>compra;
    if (compra > 10000){
        precio = compra - (compra * 0.25);
    }
    else if (compra > 10000){
        precio = compra -(compra * 0.25);}

    if (10000 >= compra){
        precio = compra - (compra * 0.10);
    }
    else if (compra <= 10000){
        precio = compra -(compra * 0.10);}

    cout<< "EL TOTAL A PAGAR ES:" <<endl<< precio<<endl;
    return 0;
}
