#include <iostream>

using namespace std;

int main() {
    double radio;
    double pi = 3.141592653589793;
    double area = 0;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    if (radio < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        area = 4 * pi * (radio * radio);
        cout << "El área de la esfera es: " << area << endl;
    }

    return 0;
}

