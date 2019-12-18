#include <iostream>
using namespace std;

int main() {
	cout << "정수 5개 입력>>";
	int *pInt = new int[5];
	double sum = 0;  // sum을 int로 하면 average도 int형으로 나온다. 왜그러지?
	double average;

	for (int i = 0; i < 5; i++) {
		cin >> pInt[i];
		sum += pInt[i];
	}
	average = sum / 5;
	cout << "평균 " << average << endl;

	delete[] pInt;
}
