#include <stdio.h>
#include <math.h>

/*

�, ���������� ������, ������ �� ����� ��� �������� ��������� ���. 
�������, ����� ������� ������������� � ������� �����, � ���������� ��� ��� ����.
��� ��� ����� ����, ��� ���� ���� ������ �� ����.

*/


/*

������������ ������� 

*/

double func(double x)
{
	//�������� �� ��, ��� ��� ������ ��������������� ��������
	//� ����� �������� ����� ������������� �������� ������� �� ���� 
	//� ��������
	//������ � �� ������� ������� � �������, sin � cos � C/CPP �������� � ���������

	double logval = pow(x, 2) + 3.0;
	if (logval < 0) return 0;

	double sqval = pow(x, 2) - log(logval);
	if (sqval < 0) return 0; 
	
	return (sqrt(sqval));
}


/*

������� �������� ������ �������������

*/

void table(double a, double b, double dx)
{
	printf("N \tx \t\tf(x) \n");
	int n = 1;
	while (a <= b)
	{
		double val = func(a);
		printf("%d \t%lf \t%lf\n", n, a, val);
		a += dx;
		n++;
	}

	return;
}


/*

������� main

*/

int main()
{
	//���������� ����������
	double a, b, dx;

	//����
	printf("Input: \na = "); scanf("%lf", &a);
	printf("b = "); scanf("%lf", &b);
	printf("dx = "); scanf("%lf", &dx);

	printf("\n\nOutput: \n");

	//������� ������
	table(a, b, dx);

	return 0;
}
