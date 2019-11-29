#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int n) : num(n) {};
	Integer(string s) { num = stoi(s); }
	int get() { return num;  }
	void set(int a) { num = a; }
	bool isEven() {
		if (num % 2 == 0) return true;
		else return false;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';  // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' ';  // 300 출력
	cout << m.isEven();  // true(정수로 1) 출력
}
