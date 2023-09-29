#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double z1; //результат обчислення 1-го виразу
	double z2; //результат обчислення 2-го виразу
	double a;  //вхідний параметр
	cout << "a= "; cin >> a;
	z1 = сos(a) + cos2(a) + cos6(a) + cos7(a);
	z2 = 4cos(a / 2) * cos(5 / 3) (a) * cos4 (a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
