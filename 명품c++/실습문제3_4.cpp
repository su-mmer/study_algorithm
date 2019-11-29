#include <iostream>
using namespace std;

class CoffeeMachine {
	int c, w, s;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso() { c -= 1; w -= 1; }
	void drinkAmericano() { c -= 1; w -= 2; }
	void drinkSugarCoffee() { c -= 1; w -= 2; s -= 1; }
	void fill() { c = 10; w = 10; s = 10; }
	void show() {
		cout << "커피 머신 상태, 커피:" << c << "\t물:" << w << "\t설탕:" << s << endl;
	}
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) : c(c), w(w), s(s){}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
