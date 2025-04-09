#include <iostream>
using namespace std;
int main() {
string a, b, c;
cout << "Ingrese a, b y c" << endl;
cin >> a >> b >> c;
if ((a < b ) and (a < c)) {
    cout << a;
}
else if ((b < a ) and (b < c)) {
    cout << b;
}
else if ((c < a ) and (c < b)) {
    cout << c;
}
}
