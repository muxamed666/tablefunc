#include <iostream>
#include <math.h>

/*

����������� �����. �������� ������ ����� � ������� ������.
����� ���������� ������������ ������� ����������� � ������ ���� ���������� � ������-����������.

*/

class tabler
{
private: 
	double a, b, dx;
public:
	void input(); //����
	void task(); //������� ������
	virtual double func(double x) = 0;
};


/*

����� ����������� ����

*/

void tabler::input()
{
	std::cout << "Input: " << std::endl;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	std::cout << "dx = "; std::cin >> dx;
}


/*

����� ����������� ������� ������ �������������

*/


void tabler::task()
{
	std::cout << "N \tx \tf(x)" << std::endl;
	int n = 1;

	while (a <= b)
	{
		double val = func(a);
		std::cout << n << "\t" << a << "\t" << val << std::endl;
		a += dx;
		n++;
	}

	return;
}


/*

�����, ���������� ���������� ������ func
��������� ������ tabler

*/

class tablerForFunc : public tabler
{
public:
	double func(double x);
};


/*

������������ �������

*/

double tablerForFunc::func(double x)
{
	double logval = pow(x, 2) + 3.0;
	if (logval < 0) return 0;

	double sqval = pow(x, 2) - log(logval);
	if (sqval < 0) return 0;

	return (sqrt(sqval));
}


/*

������� main

*/

int main()
{
	tablerForFunc t;
	t.input();
	t.task();

	return 0;
}