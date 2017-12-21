#include <stdio.h>
#include <math.h>

/*

Я, признаться честно, просто не помню как говорили оформлять код. 
Поэтому, ищите примеры табулирования с первого курса, и подгоняйте под них сами.
Там это точно было, мне лень даже думать об этом.

*/


/*

Табулируемая функция 

*/

double func(double x)
{
	//проверка на то, что под корнем неотрицательное значение
	//в вашем варианте может потребоваться проверка деления на ноль 
	//и степеней
	//учтите и не путайте радианы и градусы, sin и cos в C/CPP работают с радианами

	double logval = pow(x, 2) + 3.0;
	if (logval < 0) return 0;

	double sqval = pow(x, 2) - log(logval);
	if (sqval < 0) return 0; 
	
	return (sqrt(sqval));
}


/*

Функция решающая задачу табулирования

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

Функция main

*/

int main()
{
	//объявление переменных
	double a, b, dx;

	//ввод
	printf("Input: \na = "); scanf("%lf", &a);
	printf("b = "); scanf("%lf", &b);
	printf("dx = "); scanf("%lf", &dx);

	printf("\n\nOutput: \n");

	//решение задачи
	table(a, b, dx);

	return 0;
}
