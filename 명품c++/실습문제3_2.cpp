#include <iostream>
#include <string.h>
using namespace std;

class Date{
    int y, m, d;
public:
    Date(int a, int b, int c);
    Date(char *s);
    void show();
    int getYear() { return y; }
    int getMonth() { return m; }
    int getDay() { return d; }
};

Date::Date(int a, int b, int c) : y(a), m(b), d(c){}
Date::Date(char *s) {
    char str[20];
    for(int i=0; i<strlen(s); i++)
        str[i] = *(s+i);
    y = atoi(strtok(str, "/"));
    m = atoi(strtok(NULL, "/"));
    d = atoi(strtok(NULL, "/"));
}

void Date::show() {
    cout << y << "년" << m << "월" << d << "일" << endl;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
