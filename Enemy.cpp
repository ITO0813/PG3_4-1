#include "Enemy.h"
#include<stdio.h>

void Enemy::Func1()
{
	cout << "“G‚ªÚ‹ß!!" << endl;
}

void Enemy::Func2()
{
	cout << "“G‚ÌŽËŒ‚!!" << endl;
}

void Enemy::Func3()
{
	cout << "“G‚ª—£’E!!" << endl;
}

void Enemy::Update()
{
	(this->*table[index])();

	int a;

	scanf_s("%d", &a);
	if (a == 0) {
		index++;
	}
}

void (Enemy::* Enemy::table[])() = {
	& Enemy::Func1, 
	& Enemy::Func2, 
	& Enemy::Func3
};
