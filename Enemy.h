#pragma once

#include <iostream>

using namespace std;

class Enemy {
public:
	void Update();

	void Func1();
	void Func2();
	void Func3();

	static void (Enemy::* table[])();

private:
	int index = 0;
};

