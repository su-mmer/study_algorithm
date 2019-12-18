#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);  // 반지름을 설정
	double getArea();  // 면적을 리턴
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle circles[3];
	int num = 0, radius;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		circles[i].setRadius(radius);
		if (circles[i].getArea() >= 100) num++;
	}

	cout << "면적이 100보다 큰 원은 " << num << "개 입니다" << endl;
}
