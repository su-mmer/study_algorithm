#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a + b;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a / b;
	}
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int num1, num2;
	char cal;
	while (1) {
		cout << "두 정수와 연산자를 입력하세요>> " << endl;
		cin >> num1 >> num2 >> cal;
		if (cal == '+') {
			a.setValue(num1, num2);
			cout << a.calculate() << endl;
		}
		else if (cal == '-') {
			s.setValue(num1, num2);
			cout << s.calculate() << endl;
		}
		else if (cal == '*') {
			m.setValue(num1, num2);
			cout << m.calculate() << endl;
		}
		else if (cal == '/') {
			d.setValue(num1, num2);
			cout << d.calculate() << endl;
		}
	}
	
}
