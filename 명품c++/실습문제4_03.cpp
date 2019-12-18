#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int num = 0;
	cout << "문자열 입력>> ";
	getline(cin, text, '\n');
	
	// (1)번
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a') {
			num++;  // str을 돌면서 a가 있으면 카운트
		}
	}
	cout << "문자 a는 " << num << "개 있습니다." << endl;

	// (2)번
	int startIndex = 0;
	while(true) {
		int fIndex = text.find('a', startIndex);  // startIndex부터 a 검색해 a의 인덱스 반환
		if (fIndex != -1)  // a를 찾으면
			num++;
		else break;  // 더 이상 a가 없으면
		startIndex = fIndex + 1;
	}
	cout << "문자 a는 " << num << "개 있습니다." << endl;

}
