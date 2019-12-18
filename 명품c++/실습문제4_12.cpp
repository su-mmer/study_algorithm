#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {  // 이름과 반지름 설정
		this->name = name;
		this->radius = radius;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle *p;
	string name;
	int size, area, radius;
public:
	CircleManager(int size);  // size 크기의 배열을 동적생성
	~CircleManager() { delete[] p; }
	void searchByName();  // 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea();  // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];  // 배열 동적 생성

	for (int i = 0; i < size; i++) {  // 이름과 반지름 설정
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

void CircleManager::searchByName() {
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
			cout << name << "의 면적은 " << p[i].getArea() << endl;
	}
}

void CircleManager::searchByArea() {
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area)
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
	}
}

int main() {
	int num;  // 원의 개수, 반지름, 면적
	cout << "원의 개수 >> ";
	cin >> num;
	CircleManager circles(num);  // CircleManager 생성자에서 Circle 배열 동적 생성

	circles.searchByName();
	circles.searchByArea();
}
