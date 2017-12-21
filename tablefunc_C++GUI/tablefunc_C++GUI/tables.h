#include <iostream>
#include <math.h>


/*

����������� �����. 
����� ���������� ������������ ������� ����������� � ������ ���� ���������� � ������-����������.

*/

class tabler
{
public:
	double a, b, dx;
	void input(double, double, double); //����
	double step(); //������� ������
	virtual double func(double x) = 0;
};


/*

����� ����������� ����

*/

void tabler::input(double _a, double _b, double _dx)
{
	a = _a;
	b = _b;
	dx = _dx;
}


/*

�����, ������������ ��������� ��������

*/

double tabler::step()
{
	double val = func(a);
	a += dx;
	return val;	
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
