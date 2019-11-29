#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectRandom {
public:
	SelectRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectRandom::SelectRandom() {
	srand((unsigned)time(0));
}

int SelectRandom::next() {
	return 2 * rand();
}

int SelectRandom::nextInRange(int a, int b) {
	int n = rand() % 10 + 2;  // 2에서 10사이의 랜덤 정수 선택
	if (n % 2 == 0) return n+1;
	else return n;
}

int main() {
	SelectRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();  // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 4까지의 홀수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);  // 2에서 10 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}
