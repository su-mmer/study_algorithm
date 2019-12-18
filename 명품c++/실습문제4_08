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
	int num = 0, radius, n;  // 100보다 큰 원의 갯수, 반지름, 입력받을 원의 갯수

	cout << "원의 개수 >> ";
	cin >> n;

	Circle *circles = new Circle[n];  // 동적할당으로 객체배열 생성

	for (int i = 0; i < n; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		circles[i].setRadius(radius);
		if (circles[i].getArea() >= 100) num++;
	}

	cout << "면적이 100보다 큰 원은 " << num << "개 입니다" << endl;
	
	delete [] circles;
}
