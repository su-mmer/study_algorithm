#include <iostream>
#include <string>
using namespace std;

class Container {  // 통 하나를 나타내는 클래스
	int size;  // 현재 저장량, 최대 저장량10
	int ingredient;
public:
	Container() { size = 10; }
	void fill() { size = 10; }  // 최대량(10)으로 채우기
	void consume(int ingredient) { size -= ingredient; }  // 1만큼 소모
	int getSize() { return size; }  // 현재 크기 리턴
};

class CoffeeVendingMachine {  // 커피자판기를 표현하는 클래스
	Container tong[3];  // tong[0]=커피, tong[1]=물, tong[2]=설탕통
	void fill() {  // 3개의 통을 10으로 채움
		tong[0].fill(); tong[1].fill(); tong[2].fill();
	}
	void selectEspresso() {// 커피1, 물1 소모
		if (tong[0].getSize() < 1 || tong[1].getSize() < 1)
			cout << "원료가 부족합니다." << endl;
		else {
			cout << "에스프레소 드세요" << endl;
			tong[0].consume(1);
			tong[1].consume(1);
		}
	}
	void selectAmericano() {// 커피1, 물2 소모
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2)
			cout << "원료가 부족합니다." << endl;
		else {
			cout << "아메리카노 드세요" << endl;
			tong[0].consume(1);
			tong[1].consume(2);
		}

	}
	void selectSugarCoffee() {// 커피1, 물2, 설탕1
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1)
			cout << "원료가 부족합니다." << endl;
		else {
			cout << "설탕커피 드세요" << endl;
			tong[0].consume(1);
			tong[1].consume(2);
			tong[2].consume(1);
		}

	}
	void show() {// 현재 커피, 물, 설탕의 잔량 출력
		cout << "커피" << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run() {  // 커피 자판기 작동
		int num;
		cout << "***** 커피 자판기를 작동합니다. *****" << endl;
		while (true) {
			cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
			cin >> num;
			if (num == 1) {
				selectEspresso();
			}
			else if (num == 2) {
				selectAmericano();
			}
			else if (num == 3) {
				selectSugarCoffee();
			}
			else if (num == 4) {
				show();
			}
			else if (num == 5) {
				fill();
				show();
			}
		}
	}
};

int main() {
	CoffeeVendingMachine Machine;
	Machine.run();
}
