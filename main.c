#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main(void)
{
	char *locale = setlocale (LC_ALL, "");
	int a, b, a0, b0, r, a1, b1, r1;
	printf ("Введите первую координату точки М \n");
	scanf ("%d", &a);
	printf ("Введите вторую координату точки М \n");
	scanf ("%d", &b);
	a0 = 0;
	b0 = 0;
	r = 1;
	a1 = pow (a - a0, 2);
	b1 = pow (b - b0, 2);
	r1 = pow (r, 2);
	if (a1 + b1 <= r1) printf ("Точка находится в верхней части окружности \n");
	else printf ("Точка не находится в верхней части окружности \n");
	return 0;
}