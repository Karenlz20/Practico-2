#include <iostream>
using namespace std;
int main() {
int num_dia;
cout << "Ingrese el número del día" << endl;
cin >> num_dia;
switch (num_dia) {
    case 1:
    cout << "Lunes";
    break;
    case 2:
    cout << "Martes";
    break;
    case 3:
    cout << "Miércoles";
    break;
    case 4:
    cout << "Jueves";
    break;
    case 5:
    cout << "Viernes";
    break;
    case 6:
    cout << "Sábado";
    break;
    case 7:
    cout << "Domingo";
    break;
    default:
    cout << "Día no válido";
    break;
}
    return 0;
}

