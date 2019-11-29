// Ram.h
#pragma once
#ifndef RAM_H
#define RAM_H
class Ram
{
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

#endif


// Ram.cpp
#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram()
{
	mem[100*1024] = { 0, };
	size = 100 * 1024;
}

Ram::~Ram()
{
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}


// main.cpp
#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102번지의 값 = " << (int)ram.read(102) << endl;
}
