#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료됩니다.)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit") break;

		srand((unsigned)time(0));  
		int n = rand() % str.length();  // 0부터 str.length까지의 숫자 중 랜덤하게 발생
		char al = (rand() % 26)+97;  // 소문자를 랜덤하게 발생
		str[n] = al;
		cout << str << endl;
	}
}
