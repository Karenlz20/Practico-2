#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double A, B, C;
    cout << "Ingrese los valores de a, b y c" << endl;
    cin >> A >> B >> C;
    if (A == 0) {
        if (B != 0) {
            cout << -C / B << endl;
        }
    } 
    else {
        double disc = B * B - 4 * A * C;

        if (disc > 0) {
            double x1 = (-B + sqrt(disc)) / (2 * A);
            double x2 = (-B - sqrt(disc)) / (2 * A);
            cout << "x1 es igual a " << x1 << endl; 
            cout <<"x2 es igual a " << x2 << endl;
        } else if (disc == 0) {
            double x = -B / (2 * A);
            cout << "El resultado es " << x << endl;
        }
    }

    return 0;
}
