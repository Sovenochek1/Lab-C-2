#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main(void)
{
	char *locale = setlocale (LC_ALL, "");
	int x1, x2, x3, y1, y2, y3, s1, s2, s3, s4, s5, s6, a, b, c, a1, b1, c1;
	printf ("¬ведите координату x первой точки \n");
	scanf ("%d", &x1);
	printf ("¬ведите координату y первой точки \n");
	scanf ("%d", &y1);
	printf ("¬ведите координату x второй точки \n");
	scanf ("%d", &x2);
	printf ("¬ведите координату y второй точки \n");
	scanf ("%d", &y2);
	printf ("¬ведите координату x третьей точки \n");
	scanf ("%d", &x3);
	printf ("¬ведите координату y третьей точки \n");
	scanf ("%d", &y3);
    s1 = pow (x2 - x1, 2) + pow (y2 - y1, 2);
    s2 = sqrt(s1);
    a = s2;
    s3 = pow (x3 - x2, 2) + pow (y3 - y2, 2);
    s4 = sqrt(s3);
    b = s4;
    s5 = pow (x3 - x1, 2) + pow (y3 - y1, 2);
    s6 = sqrt(s5);
    c = s6;
    a1 = pow(a, 2);
    b1 = pow(b, 2);
    c1 = pow(c, 2);
    if (a1 + b1 > c1) printf ("“реугольник остроугольный \n");
    if (a1 + b1 == c1) printf ("“реугольник пр€моугольный \n");
    if (a1 + b1 < c1) printf ("“реугольник тупоугольный \n");
	return 0;
}