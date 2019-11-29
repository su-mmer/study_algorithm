#include <iostream>
using namespace std;

class Account{
    string name;
    int id, balance;
public:
    Account(string name, int id, int balance);
    string getOwner() { return name; }
    void deposit(int num) { balance += num; }
    int inquiry() { return balance; }
    int withdraw(int num) { balance -= num; }
};

Account::Account(string name, int id, int balance) : name(name), id(id), balance(balance){}

int main() {
    Account a("Kitae", 1, 5000); // 계좌 주인, 계좌 번호, 잔액
    a.deposit(50000); // 50000원 저금
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);  // 50000원 출금. withdraw는 출금한 실제 금액 리턴
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
