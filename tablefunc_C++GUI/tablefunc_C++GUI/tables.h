#include <iostream>
#include <math.h>


/*

Абстрактный класс. 
Метод содержащий табулируемую функцию виртуальный и должен быть реализован в классе-наследнике.

*/

class tabler
{
public:
	double a, b, dx;
	void input(double, double, double); //ввод
	double step(); //решение задачи
	virtual double func(double x) = 0;
};


/*

Метод реализующий ввод

*/

void tabler::input(double _a, double _b, double _dx)
{
	a = _a;
	b = _b;
	dx = _dx;
}


/*

Метод, возвращающий следующее значение

*/

double tabler::step()
{
	double val = func(a);
	a += dx;
	return val;	
}


/*

Класс, содержащий реализацию метода func
Наследник класса tabler

*/

class tablerForFunc : public tabler
{
public:
	double func(double x);
};


/*

Табулируемая функция

*/

double tablerForFunc::func(double x)
{
	double logval = pow(x, 2) + 3.0;
	if (logval < 0) return 0;

	double sqval = pow(x, 2) - log(logval);
	if (sqval < 0) return 0;

	return (sqrt(sqval));
}
