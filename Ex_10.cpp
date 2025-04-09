#include <iostream>
using namespace std;
int main() {
int a, b;
cout << "Ingrese los valores de a y b" << endl;
cin >> a >> b;
if (b==0) {
    cout << "Imposible";
}
else {
    cout << "El cociente es " << a/b;
 }
}
