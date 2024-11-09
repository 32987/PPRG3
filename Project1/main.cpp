#include <iostream>;
using namespace std;

void zad3_1() {
	float x, y;
	cout << "Wpisz wartosci float x i y: ";
	cin >> x >> y;
	printf("Suma: %.2f", x + y);
	cout << "\n";
	printf("Roznica: %.2f", x - y);
	cout << "\n";
	printf("Iloczyn: %.2f", x * y);
	cout << "\n";
	printf("Iloraz: %.2f", x / y);
}

void zad3_2() {
	while (true) {
		cout << "Wpisz znak z klawiatury: ";
		string znak;
		cin >> znak;
		if (size(znak) == 1) {
			if (znak == "t") {
				exit(0);
			}
			cout << znak << "\n";
		}
		else {
			cout << "Wpisz pojedynczy znak!\n";
		}
	}
}

void zad3_3() {
	while (true) {
		cout << "\nax^2 + bx + c\n";

		float a, b, c;
		cout << "Wpisz liczby a, b, c: ";
		cin >> a >> b >> c;

		if (a == 1) {
			cout << "x^2";
		}
		else if (a == -1) {
			cout << "-x^2";
		}
		else {
			cout << a << "x^2";
		}
		if (b == 1) {
			cout << "+x";
		}
		else if (b == -1) {
			cout << "-x";
		}
		else {
			cout << showpos << b << "x";
		}
		cout << showpos << c << "\n";

		cout << noshowpos;

		float delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			delta = sqrt(delta);
			cout << "Pierwiastkami tego rownania sa: " << (-b + delta) / (2 * a) << " i " << (-b - delta) / (2 * a) << "\n";
		}
		else if (delta == 0) {
			cout << "Pierwiastkiem tego rownania jest: " << (-b) / (2 * a) << "\n";
		}
		else {
			cout << "To rownanie nie ma pierwiastkow.\n";
		}
	}
}

int main() {
	zad3_1();
	zad3_2();
	zad3_3();
}