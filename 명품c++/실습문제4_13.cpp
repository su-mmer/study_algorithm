#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str1, str2;
	char ch;
public:
	Histogram(string str1) { this->str1 = str1; }
	void put(string str2) { this->str1 += str2; }
	void putc(char ch) { this->str1 += ch; }
	void print();
};

void Histogram::print() {
	int num = 0;
	int alpha[26] = { 0 };  // 알파벳 개수를 계산할 배열(알파벳은 총 26개)

	cout << str1 << endl << endl;

	for (int i = 0; i < str1.length(); i++) {
		if (isalpha(str1[i])) {  // str[i]가 문자라면
			str1[i] = tolower(str1[i]);  // 대문자를 소문자로 변경
			num++; // 총 알파벳 개수 카운트
			for (int j = 0; j < 26; j++) {  // a~z까지 아스키코드로 돌면서
				if (j + 97 == int(str1[i]))  // 알파벳이랑 str1[i]가 같은 아스키코드를 갖는다면
					alpha[j] += 1; // alpha[j] 카운팅
			}
		}
	}

	cout << "총 알파벳 수 " << num << endl << endl;
	
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << "(" << alpha[i] << ")" << '\t' << ": ";  // '알파벳(사용된 개수)' 출력
		for (int j = 0; j < alpha[i]; j++) 
			cout << "*"; // 사용된 개수만큼 '*' 출력
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}