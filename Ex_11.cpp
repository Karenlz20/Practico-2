#include <iostream>
using namespace std;

int main() {
float N, A, B, X, Y, desc, total;
cout << "Ingrese los valores" << endl;
cin >> N >> A >> B >> X >> Y;
if (N > B) {
    desc = Y/100;
    total = N - (N * desc);
    cout << "El descuento es de " << Y << "%" << endl;
    cout << "El total a pagar es de: " << total << endl;
}
else if (N > A) {
    desc= X/100;
    total= N - (N * desc);
    cout << "El descuento es de " << X << "%" << endl;
    cout << "El total a pagar es de: " << total << endl;
}

else {
    cout << "El costo del producto no alcanza para un descuento" << endl;
    cout << "El total a pagar es de: " << N << endl;
}
    return 0;
}
